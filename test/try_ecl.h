#ifndef TRY_ECL_H_
#define TRY_ECL_H_

#include "test.h"
#include <stdio.h>

cl_object lisp(const char* call);
cl_object lisp(const char* call) {
	return cl_safe_eval(c_string_to_object(call), ECL_NIL, ECL_NIL);
}

TEST(try_ecl_load_test)
{
	printf("ABTEST start of try_ecl_test\n");

	lisp("(defun header () (format t \"Starting program...~%\"))");

	// cl_object form = c_string_to_object("(defun hello() print(\"Hello world\")");
	printf("ABTEST cl_safe_eval next\n");
	// (void) form;
	// cl_safe_eval(form, ECL_NIL, ECL_NIL);

	// cl_safe_eval(c_string_to_object("(load \"try_ecl.lisp\")"), ECL_NIL, ECL_NIL);
	// cl_safe_eval(c_string_to_object("(defun hello() print(\"Hello world\")"), ECL_NIL, ECL_NIL);

	// lisp("(load \"initrc.lisp\")");

	// cl_object form = c_string_to_object("(load \"test_print.lisp\")");
	// printf("ABTEST cl_safe_eval next\n");
	//(void) cl_safe_eval(form, ECL_NIL, ECL_NIL);

	//(void) si_safe_eval(form, ECL_NIL, ECL_NIL);
	//(void) lisp("(load \"test/test_print.lisp\")");
	printf("ABTEST end of try_ecl_test\n");

	return 0;
}

TEST_SUITE(try_ecl_suite)
{
    TEST_RUN(try_ecl_load_test);
    return 0;
}

#endif // TRY_ECL_H_
