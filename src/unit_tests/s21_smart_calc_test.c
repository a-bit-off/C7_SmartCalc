#include "s21_smart_calc_test.h"

// char str[255] = "  150 / 10 + 5 * 2 / 2 + ";
// char str[255] = "  (5 + 2 * 3) + 5";

START_TEST(s21_test_0) {
  double res = 0;
  double orig = 10;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "5 + 5";
  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_1) {
  double res = 0;
  double orig = 162;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "   4 * 5 * 2 * 2 * 2 + 2";
  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_2) {
  double res = 0;
  double orig = 20;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "  150 / 10 + 5 * 2 / 2";
  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_3) {
  double res = 0;
  double orig = 9;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "  5 + 5 - 2 * 3 / 6";
  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_4) {
  double res = 0;
  double orig = 69;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "2+(5 * 5 * 5 + 5 + 2 * 2) / (2)";

  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_5) {
  double res = 0;
  double orig = 11.958851;
  int error = 0;
  char *value_of_x_str = "0.0";

  char str[255] = "5 + (3 + sin(8/2 - 3.5)) *2";

  error = s21_smart_calc(str, value_of_x_str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq_tol(res, orig, 1e-7);
}
END_TEST

START_TEST(s21_test_6) {
  double res = 0.0;

  char *str =
      "sin(cos(111))+tan(sqrt(222))-acos(asin(333))*atan(444)/ln(log(555))";
  char *value_of_x_str = "0.0";

  int result = s21_smart_calc(str, value_of_x_str, &res);

  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_test_7) {
  double res = 0.0;
  char *str = "2/1+2+3+4*5*6^7-727mod728+((1000+500*2)*201)+sin(1)";
  char *value_of_x_str = "0.0";
  int result = s21_smart_calc(str, value_of_x_str, &res);

  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_test_8) {
  double res = 0.0;
  char *str = "x+2/1+2+3+4*5*6^7-727";
  char *value_of_x_str = "0.0";
  int result = s21_smart_calc(str, value_of_x_str, &res);

  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_test_9) {
  double res = 0.0;
  char *str = "x+2/1+2+3+x*x";
  char *value_of_x_str = "5.0";
  int result = s21_smart_calc(str, value_of_x_str, &res);

  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_test_10) {
  double res = 0.0;
  char *str = "24*4 -3 * 2 + 4";
  char *value_of_x_str = "0";
  int result = s21_smart_calc(str, value_of_x_str, &res);

  ck_assert_int_eq(result, 0);
}
END_TEST

Suite *suite_smart_calc(void) {
  Suite *s = suite_create("suite_smart_calc");
  TCase *tc = tcase_create("suite_smart_calc");

  tcase_add_test(tc, s21_test_0);
  tcase_add_test(tc, s21_test_1);
  tcase_add_test(tc, s21_test_2);
  tcase_add_test(tc, s21_test_3);
  tcase_add_test(tc, s21_test_4);
  tcase_add_test(tc, s21_test_5);

  tcase_add_test(tc, s21_test_6);
  tcase_add_test(tc, s21_test_7);
  tcase_add_test(tc, s21_test_8);
  tcase_add_test(tc, s21_test_9);
  tcase_add_test(tc, s21_test_10);

  suite_add_tcase(s, tc);
  return s;
}