#include "s21_smart_calc.h"
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

/// @brief Вывод стека
/// @param stack стек
void s21_printf_stack(char *str, Stack *stack) {
  Stack *stack_print = stack;
  printf("%s\n", str);
  while (stack_print) {
    printf("%lf, %d, %d", stack_print->value, stack_print->priority,
           (int)stack_print->type);
    stack_print = stack_print->next;
    if (stack_print) {
      printf("\n");
    }
  }
  printf("\n");
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
    *number = x;
    i++;
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

  if (str[i] == 'x') {
    *type = X_LEXEME;
    i++;
  } else if (str[i] == '+') {
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

/// @brief Ищет скобки
/// @param operations
/// @return 0 - если не нашел скобки, 1 - если скобки расставлены в правильном
/// порядке, 2 - если одна из скобок отсутсвует
int s21_get_scobe(Stack *operations) {
  int flag = 0;
  int right_scobe = 0;
  int left_scobe = 0;
  while (operations != NULL) {
    if (operations->type == RIGHTScobe_LEXEME) {
      right_scobe = 1;
    }
    if (operations->type == LEFTScobe_LEXEME) {
      left_scobe = 1;
      break;
    }
  }
  if (right_scobe == 1 && left_scobe == 1) {
    flag = 1;
  } else if (right_scobe == 0 && left_scobe == 0) {
    flag = 0;
  } else {
    flag = 2;
  }
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