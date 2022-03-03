#include <stdarg.h>
#include <setjmp.h>
#include <stddef.h>
#include <cmocka.h>

void first_test(void **state)
{
    assert_int_equal(2, 2);
}