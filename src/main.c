#include "s21_smart_calc.h"

int main() {
  double res = 0;
  double orig = 10;
  int error = 0;

  char str[255] = "5 + 5";
  error = s21_smart_calc(str, &res);
  printf("error = %d, OK = %d\n", error, OK);
  printf("res %lf, orig = %lf\n", res, orig);
  return 0;
}