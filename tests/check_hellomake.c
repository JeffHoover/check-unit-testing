#include <check.h>

START_TEST (test_name)
{
  int a=3, b=3;
  ck_assert_int_eq(0,1);
  ck_assert_msg(0==1,"Zero does not equal one.");
  fail_unless(a+b==16, "err");
}
END_TEST


int main(void)
{
   return 0;
}
