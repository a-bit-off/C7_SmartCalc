#include "s21_smart_calc_v1.0.h"

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

  if (str[0] == '-' || str[0] == '+') {
    s21_push(&numbers, 0, DIG_LEXEME, 0);  //запуш нолек если унарный минус
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
      incorrect = 1;
      break;
    }
  }
  if (incorrect == 0) {
    *result = numbers->value;
  }
  /*------------------------------cleaner-----------------------------*/
  s21_remove_stack(&numbers);
  s21_remove_stack(&operations);
  return incorrect;
}
