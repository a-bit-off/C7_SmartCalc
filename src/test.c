
// /// @brief Алгоритм польской нотации
// /// @param operations Стек операторов + - * / ...
// /// @param numbers
// /// @param str_end
// int s21_polish_notation(Stack **operations, Stack **numbers, int str_end) {
//   int flag = 1;
//   int make_operations = 0;
//   // s21_printf_stack("operations:", (*operations));
//   if ((*operations) != NULL) {
//     /*---сохраняем следущий оператор если он существует----*/
//     /*------либо текущий если нисходящий цикл--------------*/
//     Stack *down_oper = NULL;
//     if (str_end == 1) {
//       down_oper = (*operations);
//     } else if ((*operations)->next != NULL) {
//       down_oper = (*operations)->next;
//     }
//     s21_printf_stack("down_oper:", down_oper);
//     /*-----------------------------------------------------*/

//     /*-------------сохраняем текущий оператор--------------*/
//     Stack *current_oper = NULL;
//     s21_push(&current_oper, (*operations)->value, (*operations)->priority,
//              (*operations)->type);
//     s21_printf_stack("current_oper:", current_oper);
//     /*----------------------------------------------------*/

//     /*--------делаю все опреации со вторым стеком---------*/
//     s21_printf_stack("(*numbers):", (*numbers));
//     if (down_oper) {
//       /*--------------условия выполнения операции---------------*/
//       if ((down_oper->priority >= current_oper->priority)) {
//         make_operations = 1;
//       } else if (str_end == 1) {
//         make_operations = 1;
//       }
//       /*--------------------------------------------------------*/

//       if (make_operations == 1) {
//         /*----------запоминаем числа---------*/
//         double num1 = 0;
//         double num2 = 0;
//         // обработка ошибок если операторов больше чем чисел  -----> error
//         if ((*numbers)->next == NULL) {
//           num1 = 0;
//           num2 = (*numbers)->value;
//         } else {
//           num1 = (*numbers)->next->value;
//           num2 = (*numbers)->value;
//         }
//         /*-----------------------------------*/

//         /*----------удаляем голову-----------*/
//         if ((*numbers)->next != NULL) {
//           s21_pop(numbers);
//         }
//         if (down_oper->type == MINUS_LEXEME) {
//           (*numbers)->value = num1 - num2;
//         } else if (down_oper->type == PLUS_LEXEME) {
//           (*numbers)->value = num1 + num2;
//         } else if (down_oper->type == MUL_LEXEME) {
//           (*numbers)->value = num1 * num2;
//         } else if (down_oper->type == DIV_LEXEME) {
//           (*numbers)->value = num1 / num2;
//         }
//         /*-----------------------------------*/
//       }
//     }
//     /*----------------------------------------------------*/
//     /*----------------------cleaner-----------------------*/
//     // удаляю первый из структуры
//     // перезапысваю второй значениями текущего
//     // удаляю текущий
//     if (make_operations) {
//       s21_pop(operations);
//       if ((*operations) && str_end == 0) {
//         (*operations)->value = current_oper->value;
//         (*operations)->priority = current_oper->priority;
//         (*operations)->type = current_oper->type;
//       }
//     }
//     s21_pop(&current_oper);
//     /*----------------------------------------------------*/
//   }

//   // обработка ошибок проверка на корректность -----> error
//   if ((*numbers) == NULL && (*operations) != NULL) {
//     flag = 0;
//   }
//   printf("\n");
//   return flag;
// }

// /// @brief Алгоритм польской нотации
// /// @param operations Стек операторов + - * / ...
// /// @param numbers
// /// @param str_end
// int s21_polish_notation(Stack **operations, Stack **numbers, int str_end) {
//   int flag = 1;
//   int make_operations = 0;
//   int loop = 1;
//   // s21_printf_stack("operations:", (*operations));
//   printf(
//       "--------------start
//       s21_polish_notation---------------------------\n");

//   while (loop == 1 && *operations) {
//     loop = 0;
//     printf("--------------start loop---------------------------\n");
//     s21_printf_stack("stack operations:", *operations);
//     s21_printf_stack("\nstack numbers:", *numbers);
//     printf("------------\n");

//     /*---сохраняем следущий оператор если он существует----*/
//     /*------либо текущий если нисходящий цикл--------------*/
//     Stack *down_oper = NULL;
//     if (str_end == 1) {
//       down_oper = (*operations);
//     } else if ((*operations)->next != NULL) {
//       down_oper = (*operations)->next;
//     }
//     s21_printf_stack("down_oper:", down_oper);
//     /*-----------------------------------------------------*/

//     /*-------------сохраняем текущий оператор--------------*/
//     Stack *current_oper = NULL;
//     s21_push(&current_oper, (*operations)->value, (*operations)->priority,
//              (*operations)->type);
//     s21_printf_stack("current_oper:", current_oper);
//     /*----------------------------------------------------*/

//     /*--------делаю все опреации со вторым стеком---------*/
//     s21_printf_stack("(*numbers):", (*numbers));
//     if (down_oper) {
//       /*--------------условия выполнения операции---------------*/
//       if ((down_oper->priority >= current_oper->priority)) {
//         make_operations = 1;
//       } else if (str_end == 1) {
//         make_operations = 1;
//       } else if (current_oper->type == RIGHTScobe_LEXEME) {
//         down_oper = current_oper->next;
//         s21_printf_stack("////////////////////////////////down_oper:",
//                          down_oper);

//         make_operations = 1;
//       }
//       /*--------------------------------------------------------*/

//       if (make_operations == 1) {
//         /*----------запоминаем числа---------*/
//         double num1 = 0;
//         double num2 = 0;
//         // обработка ошибок если операторов больше чем чисел  -----> error
//         if ((*numbers)->next == NULL) {
//           num1 = 0;
//           num2 = (*numbers)->value;
//         } else {
//           num1 = (*numbers)->next->value;
//           num2 = (*numbers)->value;
//         }
//         /*-----------------------------------*/

//         /*----------удаляем голову-----------*/
//         if ((*numbers)->next != NULL) {
//           s21_pop(numbers);
//         }
//         if (down_oper->type == MINUS_LEXEME) {
//           (*numbers)->value = num1 - num2;
//         } else if (down_oper->type == PLUS_LEXEME) {
//           (*numbers)->value = num1 + num2;
//         } else if (down_oper->type == MUL_LEXEME) {
//           (*numbers)->value = num1 * num2;
//         } else if (down_oper->type == DIV_LEXEME) {
//           (*numbers)->value = num1 / num2;
//         }
//         /*-----------------------------------*/
//       }
//     }

//     // условия цикла
//     if (current_oper->type == RIGHTScobe_LEXEME) {
//       printf("------------------------------------------------------error\n");
//       if ((current_oper->next)->type == LEFTScobe_LEXEME) {
//         s21_pop(operations);
//         s21_pop(operations);
//         make_operations = 0;
//       } else {
//         loop = 1;
//       }
//     }

//     /*----------------------------------------------------*/
//     /*----------------------cleaner-----------------------*/
//     // удаляю первый из структуры
//     // перезапысваю второй значениями текущего
//     // удаляю текущий
//     if (make_operations) {
//       s21_pop(operations);
//       if ((*operations) && str_end == 0) {
//         (*operations)->value = current_oper->value;
//         (*operations)->priority = current_oper->priority;
//         (*operations)->type = current_oper->type;
//       }
//     }
//     s21_pop(&current_oper);
//     /*----------------------------------------------------*/
//     printf("--------------end loop---------------------------\n\n");
//   }

//   // обработка ошибок проверка на корректность -----> error
//   if (((*numbers) == NULL && (*operations) != NULL) && str_end == 1) {
//     flag = 0;
//   }
//   printf("--------------end
//   s21_polish_notation---------------------------\n");

//   printf("\n");
//   return flag;
// }

// #include "s21_smart_calc.h"
// /// @brief Алгоритм польской нотации
// /// @param operations Стек операторов + - * / ...
// /// @param numbers
// /// @param str_end
// int s21_polish_notation(Stack **operations, Stack **numbers, int str_end) {
//   int flag = 1;
//   int make_operations = 0;
//   // s21_printf_stack("operations:", (*operations));
//   if ((*operations) != NULL) {
//     /*---сохраняем следущий оператор если он существует----*/
//     /*------либо текущий если нисходящий цикл--------------*/
//     Stack *down_oper = NULL;
//     if (str_end == 1) {
//       down_oper = (*operations);
//     } else if ((*operations)->next != NULL) {
//       down_oper = (*operations)->next;
//     }
//     // s21_printf_stack("down_oper:", down_oper);
//     /*-----------------------------------------------------*/

//     /*-------------сохраняем текущий оператор--------------*/
//     Stack *current_oper = NULL;
//     s21_push(&current_oper, (*operations)->value, (*operations)->priority,
//              (*operations)->type);
//     // s21_printf_stack("current_oper:", current_oper);
//     /*----------------------------------------------------*/

//     /*--------делаю все опреации со вторым стеком---------*/
//     // s21_printf_stack("(*numbers):", (*numbers));
//     if (down_oper) {
//       /*--------------условия выполнения операции---------------*/
//       if ((down_oper->priority >= current_oper->priority)) {
//         make_operations = 1;
//       } else if (str_end == 1) {
//         make_operations = 1;
//       }
//       /*--------------------------------------------------------*/

//       if (make_operations == 1) {
//         /*----------запоминаем числа---------*/
//         double num1 = 0;
//         double num2 = 0;
//         // обработка ошибок если операторов больше чем чисел  -----> error
//         if ((*numbers)->next == NULL) {
//           num1 = 0;
//           num2 = (*numbers)->value;
//         } else {
//           num1 = (*numbers)->next->value;
//           num2 = (*numbers)->value;
//         }
//         /*-----------------------------------*/

//         /*----------удаляем голову-----------*/
//         if ((*numbers)->next != NULL) {
//           s21_pop(numbers);
//         }
//         if (down_oper->type == MINUS_LEXEME) {
//           (*numbers)->value = num1 - num2;
//         } else if (down_oper->type == PLUS_LEXEME) {
//           (*numbers)->value = num1 + num2;
//         } else if (down_oper->type == MUL_LEXEME) {
//           (*numbers)->value = num1 * num2;
//         } else if (down_oper->type == DIV_LEXEME) {
//           (*numbers)->value = num1 / num2;
//         }
//         /*-----------------------------------*/
//       }
//     }
//     /*----------------------------------------------------*/
//     /*----------------------cleaner-----------------------*/
//     // удаляю первый из структуры
//     // перезапысваю второй значениями текущего
//     // удаляю текущий
//     if (make_operations) {
//       s21_pop(operations);
//       if ((*operations) && str_end == 0) {
//         (*operations)->value = current_oper->value;
//         (*operations)->priority = current_oper->priority;
//         (*operations)->type = current_oper->type;
//       }
//     }
//     s21_pop(&current_oper);
//     /*----------------------------------------------------*/
//   }

//   // обработка ошибок проверка на корректность -----> error
//   if ((*numbers) == NULL && (*operations) != NULL) {
//     flag = 0;
//   }
//   // printf("\n");
//   return flag;
// }
