#include "s21_smart_calc_test.h"

// char str[255] = "  150 / 10 + 5 * 2 / 2 + ";
// char str[255] = "  (5 + 2 * 3) + 5";

START_TEST(s21_test_0) {
  double res = 0;
  double orig = 10;
  int error = 0;

  char str[255] = "5 + 5";
  error = s21_smart_calc(str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_1) {
  double res = 0;
  double orig = 162;
  int error = 0;

  char str[255] = "   4 * 5 * 2 * 2 * 2 + 2";
  error = s21_smart_calc(str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_2) {
  double res = 0;
  double orig = 20;
  int error = 0;

  char str[255] = "  150 / 10 + 5 * 2 / 2 + ";
  error = s21_smart_calc(str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_3) {
  double res = 0;
  double orig = 9;
  int error = 0;

  char str[255] = "  5 + 5 - 2 * 3 / 6";
  error = s21_smart_calc(str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

START_TEST(s21_test_4) {
  double res = 0;
  double orig = 136;
  int error = 0;

  char str[255] = "2+(5 * 5 * 5 + 5 + 2 * 2) / (2)";

  error = s21_smart_calc(str, &res);
  ck_assert_int_eq(error, OK);
  ck_assert_double_eq(res, orig);
}
END_TEST

Suite *suite_smart_calc(void) {
  Suite *s = suite_create("suite_smart_calc");
  TCase *tc = tcase_create("suite_smart_calc");

  tcase_add_test(tc, s21_test_0);
  tcase_add_test(tc, s21_test_1);
  tcase_add_test(tc, s21_test_2);
  tcase_add_test(tc, s21_test_3);

  suite_add_tcase(s, tc);
  return s;
}