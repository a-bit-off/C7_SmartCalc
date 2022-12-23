
#include "s21_calculation.h"

/// @brief Калькулятор
/// @param str Строка
/// @param result Резульат операций
/// @return 0 - ok,  1 - error
double s21_smart_calc(char *str, double x) {
  Stack *numbers = NULL;     // -10^6 ... 10^6
  Stack *operations = NULL;  // + - * / x sin...
  size_t i = 0;              // счетчик для цикла
  char *end = NULL;  // возвращает последнее вхождение строки

  /*-------------------------- парсинг + -----------------------------*/
  /*----------------- цикл по обработке операторов -------------------*/

  if (str[0] == '-' || str[0] == '+') {
    s21_push(&numbers, 0, DIG_LEXEME, 0);
  }
  while (i < strlen(str)) {
    double value = 0;
    lexeme_enum oper = DEFAULT;
    if (s21_skip_space(&str[i], &end)) {
      i += end - &str[i];
    } else if (s21_string_to_double(&str[i], &end, &value, x)) {
      s21_push(&numbers, value, 0, 0);
      i += end - &str[i];
    } else if (s21_is_operations(&str[i], &end, &oper)) {
      i += end - &str[i];
      /*---------обработка унарки--------*/
      if (i > 1 && str[i - 2] == '(' &&
          (oper == MINUS_LEXEME || oper == PLUS_LEXEME)) {
        s21_push(&numbers, 0, 0, 0);
      }
      s21_push(&operations, 0, s21_get_priority(oper), oper);
    }
    if (s21_polish_notation_manager(&operations, &numbers, &str[i]) == 0) {
      break;
    }
  }
  /*------------------------------cleaner-----------------------------*/
  double res = numbers->value;
  s21_remove_stack(&numbers);
  s21_remove_stack(&operations);
  return res;
}

/// @brief Польская нотация
/// @param operations
/// @param numbers
/// @param str
/// @return 1 - ok, 0 - error
int s21_polish_notation_manager(Stack **operations, Stack **numbers,
                                char *str) {
  int flag = 1;
  int scobe = 0;
  int error_calculation = 0;
  if ((*operations)) {
    /*-----проверка на наличие закрывающей скобки-----*/
    /*--------------цикл до открывающий скобки--------*/
    if ((*operations)->type == RIGHTScobe_LEXEME) {
      while ((*operations) && (*numbers)) {
        if ((*operations)->type == RIGHTScobe_LEXEME &&
            ((*operations)->next)->type == LEFTScobe_LEXEME) {
          scobe = 1;
          break;
        }
        if (s21_polish_notation(operations, numbers, 0, &error_calculation) ==
            0) {
          break;
        }
      }
      if (scobe == 1 && error_calculation == 0) {
        s21_pop(operations);
        s21_pop(operations);
      } else {
        error_calculation = 1;
      }
    } else {
      /*------стандартный вызов (восходящий приоритет)------*/
      s21_polish_notation(operations, numbers, 0, &error_calculation);
    }
    /*-----заключительный этап (цикл по низходящему приоритету)------*/
    if (str[0] == '\0' && error_calculation == 0) {
      while ((*operations) != NULL && (*numbers) != NULL) {
        if (s21_polish_notation(operations, numbers, 1, &error_calculation) ==
            0) {
          break;
        }
      }
    }
  }
  if (error_calculation) {
    flag = 0;
  }
  return flag;
}

/// @brief Алгоритм польской нотации
/// @param operations Стек операторов + - * / ...
/// @param numbers
/// @param str_end
int s21_polish_notation(Stack **operations, Stack **numbers, int str_end,
                        int *error_calculation) {
  int make_operations = 0;
  *error_calculation = 0;
  if ((*operations) != NULL) {
    /*---сохраняем следущий оператор если он существует----*/
    /*------либо текущий если нисходящий цикл--------------*/
    Stack *down_oper = NULL;
    if (str_end == 1) {
      down_oper = (*operations);
    } else if ((*operations)->next != NULL) {
      down_oper = (*operations)->next;
    }

    /*-------------сохраняем текущий оператор--------------*/
    Stack *current_oper = NULL;
    s21_push(&current_oper, (*operations)->value, (*operations)->priority,
             (*operations)->type);

    /*---делаю все опреации со вторым стеком если опреатор сущеустует---*/
    if (down_oper) {
      /*--------------условия выполнения операции---------------*/
      if ((down_oper->priority >= current_oper->priority)) {
        make_operations = 1;
      } else if (str_end == 1 && (*numbers)->next != NULL) {
        make_operations = 1;
      }
      if (current_oper->type == LEFTScobe_LEXEME) {
        make_operations = 0;
      }
      /*------------------выполнение операций------------------*/
      if (make_operations == 1) {
        double num1 = 0;
        double num2 = 0;
        /* если оператор использует одно число, то нижнее не выталкиваем,
        если
         * использует два числа то выталкиваем нижнее, если второго числа нет
         -
         * ошибка калькуляции*/
        if (s21_is_operation_singl_num(down_oper->type)) {
          num2 = (*numbers)->value;
        } else {
          if ((*numbers)->next != NULL) {
            num1 = (*numbers)->next->value;
            num2 = (*numbers)->value;
            s21_pop(numbers);
          } else {
            *error_calculation = 1;
          }
        }
        /*----выполняем действие оператора----*/
        if (*error_calculation == 0) {
          *error_calculation =
              s21_execution_operations(num1, num2, down_oper, numbers);
        }
        if (*error_calculation == 1) {
          make_operations = 0;
        }
      }
    }

    /*----------------------cleaner-----------------------*/
    // удаляю первый из структуры
    // перезапысваю второй значениями текущего
    // удаляю текущий
    if (make_operations) {
      s21_pop(operations);
      if ((*operations) && str_end == 0) {
        (*operations)->value = current_oper->value;
        (*operations)->priority = current_oper->priority;
        (*operations)->type = current_oper->type;
      }
    }
    s21_pop(&current_oper);
  }
  return make_operations;
}

/// @brief Выполняте заданную операцию с числами, добавляет изменения в стек
/// @param num1
/// @param num2
/// @param down_oper
/// @param numbers
/// @return 0 - все ок, 1 - ошибка калькуляции
int s21_execution_operations(double num1, double num2, Stack *down_oper,
                             Stack **numbers) {
  int error_calculation = 0;
  if (down_oper->type == PLUS_LEXEME) {
    (*numbers)->value = num1 + num2;
  } else if (down_oper->type == MINUS_LEXEME) {
    (*numbers)->value = num1 - num2;
  } else if (down_oper->type == DIV_LEXEME) {
    if (num2 == 0) {
      (*numbers)->value = NAN;
    } else {
      (*numbers)->value = num1 / num2;
    }
  } else if (down_oper->type == MUL_LEXEME) {
    (*numbers)->value = num1 * num2;
  } else if (down_oper->type == POW_LEXEME) {
    (*numbers)->value = pow(num1, num2);
  } else if (down_oper->type == MOD_LEXEME) {
    (*numbers)->value = fmod(num1, num2);
  } else if (down_oper->type == COS_LEXEME) {
    (*numbers)->value = cos(num2);
  } else if (down_oper->type == SIN_LEXEME) {
    (*numbers)->value = sin(num2);
  } else if (down_oper->type == TAN_LEXEME) {
    (*numbers)->value = tan(num2);
  } else if (down_oper->type == ACOS_LEXEME) {
    (*numbers)->value = acos(num2);
  } else if (down_oper->type == ASIN_LEXEME) {
    (*numbers)->value = asin(num2);
  } else if (down_oper->type == ATAN_LEXEME) {
    (*numbers)->value = atan(num2);
  } else if (down_oper->type == SQRT_LEXEME) {
    (*numbers)->value = sqrt(num2);
  } else if (down_oper->type == LN_LEXEME) {
    (*numbers)->value = log10(num2);
  } else if (down_oper->type == LOG_LEXEME) {
    (*numbers)->value = log(num2);
  }
  return error_calculation;
}

/// @brief Получаем приоритет из enum
/// @param oper enum
int s21_get_priority(lexeme_enum oper) {
  int num = 0;
  if (oper == DEFAULT) {
    num = -10;
  } else if (oper == X_LEXEME) {
    num = 0;
  } else if (oper == PLUS_LEXEME || oper == MINUS_LEXEME) {
    num = 1;
  } else if (oper == DIV_LEXEME || oper == MUL_LEXEME) {
    num = 2;
  } else if (oper == POW_LEXEME || oper == MOD_LEXEME) {
    num = 3;
  } else if (oper == LEFTScobe_LEXEME) {
    num = -1;
  } else if (oper == RIGHTScobe_LEXEME) {
    num = -1;
  } else {
    num = 4;
  }
  return num;
}

/// @brief Пропуск пробелов
/// @param str Стартовая строка
/// @param end Указатель на последнее вхождение
/// @return 1 - ok 0 - error
int s21_skip_space(char *str, char **end) {
  int i = 0;
  int flag = 0;
  while (s21_is_space(str[i]) == 1) {
    i++;
    flag = 1;
  }
  *end = (char *)&str[i];
  return flag;
}

/// @brief Перевод из строки в double
/// @param str Стартовая строка
/// @param end Указатель на последнее вхождение
/// @param numbur Число
/// @return 1 - ok 0 - error
int s21_string_to_double(char *str, char **end, double *number, double x) {
  int flag = 1;
  double num = 0;
  int dot = 0;
  size_t i = 0;
  if (str[i] == 'x') {
    num = x;
    i++;
    flag = 1;
  } else {
    if (s21_is_digit(str[i]) == 0) {
      if (str[i] == '.') {
        if (s21_is_digit(str[i + 1]) == 0) {
          flag = 0;
        }
      } else {
        flag = 0;
      }
    }
    if (flag == 1) {
      for (;; i++) {
        if (s21_is_digit(str[i]) == 0) {
          if (str[i] != '.') {
            break;
          }
        }
        if (str[i] == '.') {
          dot = 10;
        }
        if (dot == 0) {
          num = (num * 10) + (double)(str[i] - '0');
        } else if (str[i] != '.') {
          num += (double)(str[i] - '0') / dot;
          dot *= 10;
        }
      }
    }
  }
  *end = (char *)&str[i];
  *number = num;
  return flag;
}

/// @brief Поиск цифры
/// @param c
/// @return 0 - если не цифра 1 - если цифра
int s21_is_digit(char c) {
  int flag = 0;
  if (c >= '0' && c <= '9') {
    flag = 1;
  }
  return flag;
}

/// @brief Поиск пробела
/// @param c
/// @return 0 - если не пробел 1 - если пробел
int s21_is_space(char c) {
  int flag = 0;
  if ((c == ' ') || (c == '\t') || (c == '\n') || (c == '\v') || (c == '\f') ||
      (c == '\r')) {
    flag = 1;
  }
  return flag;
}

/// @brief Поиск
/// @param str Стартовая строка
/// @param end Указатель на последнее вхождение
/// @param oper Число
/// @return 1 - ok 0 - error
int s21_is_operations(char *str, char **end, lexeme_enum *type) {
  int flag = 0;
  *type = DEFAULT;
  int i = 0;

  if (str[i] == '+') {
    *type = PLUS_LEXEME;
    i++;
  } else if (str[i] == '-') {
    *type = MINUS_LEXEME;
    i++;
  } else if (str[i] == '/') {
    *type = DIV_LEXEME;
    i++;
  } else if (str[i] == '*') {
    *type = MUL_LEXEME;
    i++;
  } else if (str[i] == '^') {
    *type = POW_LEXEME;
    i++;
  } else if (str[i] == 'm' && str[i + 1] == 'o' && str[i + 2] == 'd') {
    *type = MOD_LEXEME;
    i += 3;
  } else if (str[i] == 's' && str[i + 1] == 'i' && str[i + 2] == 'n') {
    *type = SIN_LEXEME;
    i += 3;
  } else if (str[i] == 'c' && str[i + 1] == 'o' && str[i + 2] == 's') {
    *type = COS_LEXEME;
    i += 3;
  } else if (str[i] == 't' && str[i + 1] == 'a' && str[i + 2] == 'n') {
    *type = TAN_LEXEME;
    i += 3;
  } else if (str[i] == 'a' && str[i + 1] == 's' && str[i + 2] == 'i' &&
             str[i + 3] == 'n') {
    *type = ASIN_LEXEME;
    i += 4;
  } else if (str[i] == 'a' && str[i + 1] == 'c' && str[i + 2] == 'o' &&
             str[i + 3] == 's') {
    *type = ACOS_LEXEME;
    i += 4;
  } else if (str[i] == 'a' && str[i + 1] == 't' && str[i + 2] == 'a' &&
             str[i + 3] == 'n') {
    *type = ATAN_LEXEME;
    i += 4;
  } else if (str[i] == 's' && str[i + 1] == 'q' && str[i + 2] == 'r' &&
             str[i + 3] == 't') {
    *type = SQRT_LEXEME;
    i += 4;
  } else if (str[i] == 'l' && str[i + 1] == 'n') {
    *type = LN_LEXEME;
    i += 2;
  } else if (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'g') {
    *type = LOG_LEXEME;
    i += 3;
  } else if (str[i] == '(') {
    *type = LEFTScobe_LEXEME;
    i++;
  } else if (str[i] == ')') {
    *type = RIGHTScobe_LEXEME;
    i++;
  }

  if (*type != DEFAULT) {
    flag = 1;
  }
  *end = (char *)&str[i];

  return flag;
}

/// @brief Находит оператор, которому нужно только одно число
/// @param type
/// @return 1 - если нашел, 0 - если нет
int s21_is_operation_singl_num(lexeme_enum type) {
  int flag = 0;
  if (type >= 11 && type <= 19) {
    flag = 1;
  }
  return flag;
}

/// @brief Обработчик ошибок
/// @param str
/// @return 1 - ok 0 - error
int s21_validator(char *str) {
  int res = 1, i = 0, scob = 0;
  while (i != (int)strlen(str)) {
    if (str[i] == 'x' && i != 0 && i != (int)strlen(str)) {
      if (str[i - 1] == ')' || str[i + 1] == '(' ||
          (str[i - 1] <= '9' && str[i - 1] >= '0') ||
          (str[i + 1] <= '9' && str[i + 1] >= '0') || str[i + 1] == 's' ||
          str[i + 1] == 'c' || str[i + 1] == 't' || str[i + 1] == 'a' ||
          str[i + 1] == 'l' || str[i + 1] == 'm' || str[i + 1] == 'i' ||
          str[i + 1] == 'o' || str[i + 1] == 'q' || str[i + 1] == 'n') {
        res = 0;
      }
    }
    if (str[i] == '.') {
      if (i == 0 || i == (int)strlen(str) - 1) {
        res = 0;
      } else {
        if ((str[i - 1] >= '9' && str[i - 1] <= '0') ||
            (str[i + 1] >= '9' && str[i + 1] <= '0')) {
          res = 0;
        }
      }
    } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
               str[i] == '/' || str[i] == '^') {
      if (i == 0) {
        if (str[i] != '-') {
          res = 0;
        } else if (str[i] == '-' && str[i + 1] <= '0' && str[i + 1] >= '9') {
          res = 0;
        } else if (i == (int)strlen(str) - 1) {
          res = 0;
        } else {
          if ((str[i - 1] != ')' && str[i - 1] > '9' && str[i - 1] < '0') ||
              (str[i + 1] < '0' && str[i + 1] > '9') || str[i + 1] == 'm' ||
              str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*' ||
              str[i + 1] == '/' || str[i + 1] == '^') {
            res = 0;
          }
        }
      }
    } else if (str[i] == ')') {
      scob -= 1;
      if (scob == -1) {
        res = 0;
      }
      if (i != 0) {
        if (str[i - 1] == '+' || str[i - 1] == '/' || str[i - 1] == '*' ||
            str[i - 1] == '-' || str[i - 1] == '^' || str[i - 1] == '(') {
          res = 0;
        }
        if ((str[i + 1] == 's' && str[i + 2] == 'i' && str[i + 3] == 'n') ||
            (str[i + 1] == 'c' && str[i + 2] == 'o' && str[i + 3] == 's') ||
            (str[i + 1] == 't' && str[i + 2] == 'a' && str[i + 3] == 'n') ||
            (str[i + 1] == 'a' && str[i + 2] == 's' && str[i + 3] == 'i' &&
             str[i + 4] == 'n') ||
            (str[i + 1] == 'a' && str[i + 2] == 'c' && str[i + 3] == 'o' &&
             str[i + 4] == 's') ||
            (str[i + 1] == 'l' && str[i + 2] == 'n') ||
            (str[i + 1] == 'l' && str[i + 2] == 'o' && str[i + 3] == 'g') ||
            (str[i + 1] == 'a' && str[i + 2] == 't' && str[i + 3] == 'a' &&
             str[i + 4] == 'n') ||
            (str[i + 1] == 's' && str[i + 2] == 'q' && str[i + 3] == 'r' &&
             str[i + 4] == 't') ||
            (str[i + 1] == 'm' && str[i + 2] == 'o' && str[i + 3] == 'd')) {
          res = 0;
        }
      } else {
        res = 0;
      }
    } else if (str[i] == '(') {
      scob += 1;
      if (i != (int)strlen(str) - 1) {
        if (str[i + 1] == '+' || str[i + 1] == '/' || str[i + 1] == '*' ||
            str[i + 1] == '^' || str[i + 1] == ')') {
          res = 0;
        }
        if (str[i - 1] <= '9' && str[i - 1] >= '0') {
          res = 0;
        }
      } else {
        res = 0;
      }
    } else if ((str[i] == 's' && str[i + 1] == 'i' && str[i + 2] == 'n') ||
               (str[i] == 'c' && str[i + 1] == 'o' && str[i + 2] == 's') ||
               (str[i] == 't' && str[i + 1] == 'a' && str[i + 2] == 'n') ||
               (str[i] == 'a' && str[i + 1] == 's' && str[i + 2] == 'i' &&
                str[i + 3] == 'n') ||
               (str[i] == 'a' && str[i + 1] == 'c' && str[i + 2] == 'o' &&
                str[i + 3] == 's') ||
               (str[i] == 'l' && str[i + 1] == 'n') ||
               (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'g') ||
               (str[i] == 'a' && str[i + 1] == 't' && str[i + 2] == 'a' &&
                str[i + 3] == 'n') ||
               (str[i] == 's' && str[i + 1] == 'q' && str[i + 2] == 'r' &&
                str[i + 3] == 't')) {
      if ((i != 0 && str[i - 1] == ')') ||
          (str[i - 1] <= '9' && str[i - 1] >= '0')) {
        res = 0;
      }
    } else if (str[i] == 'm' && str[i + 1] == 'o' && str[i + 2] == 'd') {
      if ((i == 0 && str[i] == 'm') ||
          (str[i] == 'd' && i == (int)strlen(str) - 1)) {
        res = 0;
      } else if (i != 0 && str[i] == 'm' &&
                 (str[i - 1] == '(' || str[i - 1] == '+' || str[i - 1] == '/' ||
                  str[i - 1] == '*' || str[i - 1] == '-' ||
                  str[i - 1] == '^')) {
        res = 0;
      } else if (i != (int)strlen(str) - 1 && str[i] == 'd' &&
                 (str[i + 1] == '+' || str[i + 1] == '/' || str[i + 1] == '*' ||
                  str[i + 1] == '-' || str[i + 1] == '^')) {
        res = 0;
      }
    }
    i++;
  }
  if (scob != 0) {
    res = 0;
  }
  return res;
}
