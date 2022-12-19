#include "s21_smart_calc.h"

/// @brief Калькулятор
/// @param str Строка
/// @param result Резульат операций
/// @return 0 - ok,  1 - error
int s21_smart_calc(char *str, double *result) {
  Stack *numbers = NULL;     // -10^6 ... 10^6
  Stack *operations = NULL;  // + - * / x sin...
  size_t i = 0;              // счетчик для цикла
  char *end = NULL;  // возвращает последнее вхождение строки
  // int str_end = 0;  // конец парсинга - флаг для нисходящего цикла
  int incorrect = 0;  // обработка неккоректного ввода, когда операторов больше
                      // чем переменных и тд и тп

  /*-------------------------- парсинг + -----------------------------*/
  /*-----------------цикл по восходящему приоритету-------------------*/
  while (i < strlen(str)) {
    double value = 0;
    lexeme_enum oper = DEFAULT;
    if (s21_skip_space(&str[i], &end)) {
      i += end - &str[i];
    } else if (s21_string_to_double(&str[i], &end, &value)) {
      s21_push(&numbers, value, 0, 0);
      i += end - &str[i];
    } else if (s21_is_operations(&str[i], &end, &oper)) {
      s21_push(&operations, 0, s21_get_priority(oper), oper);
      i += end - &str[i];
    }
    // if (i == strlen(str) - 1) {
    //   str_end = 1;
    // }
    // s21_printf_stack("\nstack operations:", operations);
    // s21_printf_stack("stack numbers:", numbers);

    if (s21_polish_notation_manager(&operations, &numbers, &str[i]) == 0) {
      incorrect = 1;
      break;
    }
    // if (s21_polish_notation(&operations, &numbers, str_end) == 0) {
    //   incorrect = 1;
    //   break;
    // }
  }
  /*------------------------------------------------------------------*/

  /*-----------------цикл по нисходящему приоритету-------------------*/
  // printf(
  //     "\n\n/*-----------------цикл по нисходящему "
  //     "приоритету-------------------*/\n\n\n");
  // str_end = 1;
  // while (operations && numbers && incorrect == 0) {
  //   if (s21_polish_notation(&operations, &numbers, str_end) == 0) {
  //     incorrect = 1;
  //   }
  // }
  /*------------------------------------------------------------------*/

  printf(
      "/*------------------------------вывод "
      "данных--------------------------*/\n");
  s21_printf_stack("\n\nstack operations:", operations);
  s21_printf_stack("\nstack numbers:", numbers);

  if (incorrect == 0) {
    *result = numbers->value;
  }
  /*------------------------------------------------------------------*/

  /*------------------------------cleaner-----------------------------*/
  s21_remove_stack(&numbers);
  s21_remove_stack(&operations);
  /*------------------------------------------------------------------*/
  return incorrect;
}
