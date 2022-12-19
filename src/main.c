#include "s21_smart_calc.h"

int main() {
  double my_res = 0;
  double orig_res = 10;
  int my_return = 0;

  char str[255] = "2+(5 * 5 * 5 + 5 + 2 * 2) / (1 + 1)";
  // char str[255] = "7+(1*2*3+4+5*6)";

  my_return = s21_smart_calc(str, &my_res);
  printf("\n\nmy_return = %d, return_orig = %d\n", my_return, OK);
  printf("my_res %lf, orig_res = %lf\n", my_res, orig_res);
  return 0;
}