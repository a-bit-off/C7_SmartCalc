#ifndef SRC_S21_CALCULATION_H_
#define SRC_S21_CALCULATION_H_

#include "s21_stack.h"

int s21_polish_notation_manager(Stack **operations, Stack **numbers, char *str);
int s21_polish_notation(Stack **operations, Stack **numbers, int str_end,
                        int *error_calculation);
double s21_smart_calc(char *str, double x);
int s21_execution_operations(double num1, double num2, Stack *down_oper,
                             Stack **numbers);

/*HTLPER*/

int s21_is_digit(char c);
int s21_is_space(char c);
int s21_string_to_double(char *str, char **end, double *number, double x);
int s21_skip_space(char *str, char **end);
int s21_is_operations(char *str, char **end, lexeme_enum *type);
int s21_get_priority(lexeme_enum oper);
int s21_is_operation_singl_num(lexeme_enum type);
int s21_validator(char *str);
/*HTLPER*/

#endif  // SRC_S21_CALCULATION_H_
