//
// Created by Josean Camarena on 07/07/22.
//

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

#include <stdio.h>
#include <ctype.h>

#include "hello_world.h"

void redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

TestSuite(hello_world, .init = redirect_all_std);

Test(hello_world, simple_hello)
{
  simple_hello();
  fflush(stdout);

  cr_assert_stdout_eq_str("Hello World!");
}

Test(hello_world, greet)
{
  greet("Josean");
  greet("Ivan");
  greet("Luis");
  fflush(stdout);

  cr_assert_stdout_eq_str("Hello Josean!Hello Ivan!Hello Luis!");
}

Test(hello_world, say_goodbye)
{
  say_goodbye("Josean");
  say_goodbye("Ivan");
  say_goodbye("Luis");
  fflush(stdout);

  cr_assert_stdout_eq_str("Bye Josean!Bye Ivan!Bye Luis!");
}


Test(hello_world, reverse_greet)
{
  reverse_greet("Josean");
  reverse_greet("Ivan");
  reverse_greet("Luis");
  fflush(stdout);

  cr_assert_stdout_eq_str("Hello naesoJ!Hello navI!Hello siuL!");
}
