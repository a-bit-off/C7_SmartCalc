#include "s21_smart_calc.h"

int main() {
  double my_res = 0;
  double orig_res = 5 + ((sin(0.5) + 3) * 2);
  int my_return = 0;
  char *x = "0";

  char str[255] = "24*4 -3 * 2 + 4";

  my_return = s21_smart_calc(str, x, &my_res);
  printf("\n\nmy_return = %d, return_orig = %d\n", my_return, OK);
  printf("my_res %lf, orig_res = %lf\n", my_res, orig_res);
  return 0;
}