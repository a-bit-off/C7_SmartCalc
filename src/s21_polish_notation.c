#include "s21_smart_calc.h"

int s21_polish_notation_manager(Stack **operations, Stack **numbers,
                                char *str) {
  int flag = 1;
  int scobe = 0;
  // необходимо определить когда выталкивать оператор когда нет
  // НЕ выталкиваем когда:
  // закончился парсинг
  // встретили закрывающую скобку

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
        if (s21_polish_notation(operations, numbers, 0) == 0) {
          flag = 1;
          break;
        }
      }
      printf("----------------- loop 2 end ----------------------\n");

      if (scobe == 1) {
        s21_pop(operations);
        s21_pop(operations);
      } else {
        flag = 0;  // error
      }
    } else {
      printf("----------------- just func start ----------------------\n");
      s21_printf_stack("\n\nstack operations:", (*operations));
      s21_printf_stack("\nstack numbers:", (*numbers));
      s21_polish_notation(operations, numbers, 0);
      printf("----------------- just func end ----------------------\n");
    }

    if (str[0] == '\0') {
      printf("----------------- loop 1 start ----------------------\n");
      s21_printf_stack("\n\nstack operations:", (*operations));
      s21_printf_stack("\nstack numbers:", (*numbers));
      while ((*operations) != NULL && (*numbers) != NULL) {
        if (s21_polish_notation(operations, numbers, 1) == 0) {
          break;
        }
      }
      printf("----------------- loop 1 end ----------------------\n");
    }
    // в остальных случаях выталкиваем
    // когда нижний оператор имеет приоритет больше чем верхний
  }
  return flag;
}

/// @brief Алгоритм польской нотации
/// @param operations Стек операторов + - * / ...
/// @param numbers
/// @param str_end
int s21_polish_notation(Stack **operations, Stack **numbers, int str_end) {
  int make_operations = 0;

  // s21_printf_stack("operations:", (*operations));
  if ((*operations) != NULL) {
    /*---сохраняем следущий оператор если он существует----*/
    /*------либо текущий если нисходящий цикл--------------*/
    Stack *down_oper = NULL;
    if (str_end == 1) {
      down_oper = (*operations);
    } else if ((*operations)->next != NULL) {
      down_oper = (*operations)->next;
    }
    // s21_printf_stack("down_oper:", down_oper);
    /*-----------------------------------------------------*/

    /*-------------сохраняем текущий оператор--------------*/
    Stack *current_oper = NULL;
    s21_push(&current_oper, (*operations)->value, (*operations)->priority,
             (*operations)->type);
    // s21_printf_stack("current_oper:", current_oper);
    /*----------------------------------------------------*/

    /*--------делаю все опреации со вторым стеком---------*/
    // s21_printf_stack("(*numbers):", (*numbers));
    if (down_oper) {
      /*--------------условия выполнения операции---------------*/
      if ((down_oper->priority >= current_oper->priority) &&
          (*numbers)->next != NULL) {
        make_operations = 1;
      } else if (str_end == 1 && (*numbers)->next != NULL) {
        make_operations = 1;
      }
      if (current_oper->type == LEFTScobe_LEXEME) {
        make_operations = 0;
      }
      /*--------------------------------------------------------*/

      if (make_operations == 1) {
        /*----------запоминаем числа---------*/
        double num1 = (*numbers)->next->value;
        double num2 = (*numbers)->value;
        /*-----------------------------------*/

        /*----------удаляем голову-----------*/
        if ((*numbers)->next != NULL) {
          s21_pop(numbers);
        }
        if (down_oper->type == MINUS_LEXEME) {
          (*numbers)->value = num1 - num2;
        } else if (down_oper->type == PLUS_LEXEME) {
          (*numbers)->value = num1 + num2;
        } else if (down_oper->type == MUL_LEXEME) {
          (*numbers)->value = num1 * num2;
        } else if (down_oper->type == DIV_LEXEME) {
          (*numbers)->value = num1 / num2;
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

  // обработка ошибок проверка на корректность -----> error

  // printf("\n");
  return make_operations;
}
