<<<<<<< HEAD
#include "s21_smart_calc_v1.0.h"
=======
#include "s21_stack.h"
>>>>>>> hazzeasu
/// @brief Добавление в стек
/// @param head
/// @param value переменная структуры
/// @param priority приоритет
/// @param type оператор (+, -, *, /, ~, sin ...)
void s21_push(Stack **head, double value, int priority, lexeme_enum type) {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->value = value;
  stack->priority = priority;
  stack->type = type;
  stack->next = *head;
  (*head) = stack;
}

<<<<<<< HEAD
/// @brief Удаление из стека
=======
/// @brief Удаление голвы из стека
>>>>>>> hazzeasu
/// @param head
void s21_pop(Stack **head) {
  Stack *stack = (*head);
  if (stack) {
    free(*head);
  }
  (*head) = stack->next;
}

/// @brief Удаление всего стека
/// @param head
void s21_remove_stack(Stack **head) {
  while (*head) {
    s21_pop(&(*head));
  }
}