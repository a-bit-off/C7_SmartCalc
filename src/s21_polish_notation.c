#include "s21_smart_calc.h"

int s21_polish_notation_manager(Stack **operations, Stack **numbers,
                                char *str) {
  int flag = 1;
  int scobe = 0;
  int error_calculation = 0;
  if ((*operations)) {
    if ((*operations)->type == RIGHTScobe_LEXEME) {
      printf("----------------- loop 2 start ----------------------\n");
      while ((*operations) && (*numbers)) {
        s21_printf_stack("\n\nstack operations:", (*operations));
        s21_printf_stack("\nstack numbers:", (*numbers));
        if ((*operations)->type == RIGHTScobe_LEXEME &&
            ((*operations)->next)->type == LEFTScobe_LEXEME) {
          scobe = 1;
          break;
        }
        if (s21_polish_notation(operations, numbers, 0, &error_calculation) ==
            0) {
          flag = 1;
          break;
        }
      }
      printf("----------------- loop 2 end ----------------------\n");

      if (scobe == 1) {
        s21_pop(operations);
        s21_pop(operations);
      } else {
        error_calculation = 0;  // error
      }
    } else {
      printf("----------------- just func start ----------------------\n");
      s21_printf_stack("\n\nstack operations:", (*operations));
      s21_printf_stack("\nstack numbers:", (*numbers));
      s21_polish_notation(operations, numbers, 0, &error_calculation);
      printf("----------------- just func end ----------------------\n");
    }

    if (str[0] == '\0') {
      printf("----------------- loop 1 start ----------------------\n");
      s21_printf_stack("\n\nstack operations:", (*operations));
      s21_printf_stack("\nstack numbers:", (*numbers));
      while ((*operations) != NULL && (*numbers) != NULL) {
        if (s21_polish_notation(operations, numbers, 1, &error_calculation) ==
            0) {
          break;
        }
      }
      printf("----------------- loop 1 end ----------------------\n");
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
    /*-----------------------------------------------------*/

    /*-------------сохраняем текущий оператор--------------*/
    Stack *current_oper = NULL;
    s21_push(&current_oper, (*operations)->value, (*operations)->priority,
             (*operations)->type);
    /*----------------------------------------------------*/

    /*--------делаю все опреации со вторым стеком---------*/
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
      /*--------------------------------------------------------*/

      if (make_operations == 1) {
        double num1 = 0;
        double num2 = 0;
        /* если оператор использует одно число, то нижнее не выталкиваем, если
         * использует два числа то выталкиваем нижнее, если второго чисkа нет -
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
              s21_operations_manager(num1, num2, down_oper, numbers);
        }
        /*-----------------------------------*/
      }
    }
    /*----------------------------------------------------*/

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
    /*----------------------------------------------------*/
  }
  return make_operations;
}

/// @brief Выполняте заданную операцию с числами, добавляет изменения в стек
/// @param num1
/// @param num2
/// @param down_oper
/// @param numbers
/// @return 0 - все ок, 1 - ошибка калькуляции
int s21_operations_manager(double num1, double num2, Stack *down_oper,
                           Stack **numbers) {
  int error_calculation = 0;
  if (down_oper->type == PLUS_LEXEME) {
    (*numbers)->value = num1 + num2;
  } else if (down_oper->type == MINUS_LEXEME) {
    (*numbers)->value = num1 - num2;
  } else if (down_oper->type == DIV_LEXEME) {
    if (num2 == 0) {
      error_calculation = 1;
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