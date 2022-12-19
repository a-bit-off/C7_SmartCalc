#ifndef S21_SMART_CALC_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define INCORRECT 1

/*STACK*/
typedef enum {
  DEFAULT = 0,
  DIG_LEXEME = 1,
  X_LEXEME = 2,
  PLUS_LEXEME = 3,
  MINUS_LEXEME = 4,
  DIV_LEXEME = 5,
  MUL_LEXEME = 6,
  POW_LEXEME = 7,
  MOD_LEXEME = 8,
  COS_LEXEME = 11,
  SIN_LEXEME = 12,
  TAN_LEXEME = 13,
  ACOS_LEXEME = 14,
  ASIN_LEXEME = 15,
  ATAN_LEXEME = 16,
  SQRT_LEXEME = 17,
  LN_LEXEME = 18,
  LOG_LEXEME = 19,
  LEFTScobe_LEXEME = 20,
  RIGHTScobe_LEXEME = 21
} lexeme_enum;

typedef struct s_stack {
  double value;
  int priority;
  lexeme_enum type;
  struct s_stack *next;
} Stack;

void s21_push(Stack **head, double value, int priority, lexeme_enum type);
void s21_remove_stack(Stack **head);
void s21_pop(Stack **head);

/*STACK*/

// int s21_polish_notation_manager(char *str);
int s21_polish_notation_manager(Stack **operations, Stack **numbers, char *str);

int s21_polish_notation(Stack **operations, Stack **numbers, int str_end);
int s21_smart_calc(char *str, double *result);

/*HTLPER*/
int s21_is_digit(char c);
int s21_is_space(char c);
int s21_string_to_double(char *str, char **end, double *numbur);
int s21_skip_space(char *str, char **end);
int s21_is_operations(char *str, char **end, lexeme_enum *type);
int s21_get_priority(lexeme_enum oper);
int s21_get_scobe(Stack *operations);
/*HTLPER*/

/*ANOTHER*/
void s21_printf_stack(char *str, Stack *stack);
/*ANOTHER*/

#endif  // S21_SMART_CALC_H_