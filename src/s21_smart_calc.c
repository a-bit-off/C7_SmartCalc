#include "s21_smart_calc.h"

/// @brief Калькулятор
/// @param str Строка
/// @param result Резульат операций
/// @return 0 - ok,  1 - error
int s21_smart_calc(char *str, char *x_str, double *result) {
  Stack *numbers = NULL;     // -10^6 ... 10^6
  Stack *operations = NULL;  // + - * / x sin...
  size_t i = 0;              // счетчик для цикла
  char *end = NULL;  // возвращает последнее вхождение строки
  int incorrect = 0;  // обработка неккоректного ввода, когда операторов больше
                      // чем переменных и тд и тп
  double x = 0;  // переменная x в числовом эквеваленте
  s21_string_to_double(x_str, &end, &x, 0);  // переводим x в double
  end = NULL;                                // обратно зануляем

  /*-------------------------- парсинг + -----------------------------*/
  /*----------------- цикл по обработке операторов -------------------*/
  while (i < strlen(str)) {
    double value = 0;
    lexeme_enum oper = DEFAULT;
    if (s21_skip_space(&str[i], &end)) {
      i += end - &str[i];
    } else if (s21_string_to_double(&str[i], &end, &value, x)) {
      s21_push(&numbers, value, 0, 0);
      i += end - &str[i];
    } else if (s21_is_operations(&str[i], &end, &oper)) {
      s21_push(&operations, 0, s21_get_priority(oper), oper);
      i += end - &str[i];
    }
    if (s21_polish_notation_manager(&operations, &numbers, &str[i]) == 0) {
      incorrect = 1;
      break;
    }
  }
  /*--------------------------вывод данных-----------------------------*/

  printf(
      "/*------------------------------вывод "
      "данных--------------------------*/\n");
  s21_printf_stack("\n\nstack operations:", operations);
  s21_printf_stack("\nstack numbers:", numbers);

  if (incorrect == 0) {
    *result = numbers->value;
  }
  /*------------------------------cleaner-----------------------------*/
  s21_remove_stack(&numbers);
  s21_remove_stack(&operations);
  return incorrect;
}
