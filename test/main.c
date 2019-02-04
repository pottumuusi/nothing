#include "test.h"
#include "tokenizer_suite.h"
#include "parser_suite.h"
#include "interpreter_suite.h"
#include "scope_suite.h"
#include "try_ecl.h"

#include <stdio.h>

TEST_MAIN()
{
    printf("ABTEST TEST_MAIN start\n");
    TEST_RUN(tokenizer_suite);
    TEST_RUN(parser_suite);
    TEST_RUN(interpreter_suite);
    TEST_RUN(scope_suite);
    printf("ABTEST Running try_ecl_suite next\n");
    TEST_RUN(try_ecl_suite);

    return 0;
}
