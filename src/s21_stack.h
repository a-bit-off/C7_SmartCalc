#ifndef SRC_S21_STACK_H_
#define SRC_S21_STACK_H_

#include <math.h>
#include <stdlib.h>

#include "stdio.h"
#include "string.h"

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
void s21_pop(Stack **head);
void s21_remove_stack(Stack **head);

#endif  // SRC_S21_STACK_H_