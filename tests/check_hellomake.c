#include <check.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void
setup (void)
{
}

void
teardown (void)
{
}


START_TEST (test_name)
{
  int a=3, b=3;
  ck_assert_int_eq(0,1);
  ck_assert_msg(0==1,"Zero does not equal one.");
  fail_unless(a+b==16, "err");
}
END_TEST


Suite *
hellomake_suite (void)
{
  Suite *s = suite_create ("Money");

  /* Core test case */
  TCase *tc_core = tcase_create ("Core");
  tcase_add_checked_fixture (tc_core, setup, teardown);
  tcase_add_test (tc_core, test_name);
  suite_add_tcase (s, tc_core);
  return s;
}

int main(void)
{
  int number_failed;
  Suite *s = hellomake_suite ();
  SRunner *sr = srunner_create (s);
  srunner_run_all (sr, CK_NORMAL);
  number_failed = srunner_ntests_failed (sr);
  srunner_free (sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
