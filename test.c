#include "../Unity_tests/src/unity.h"
#include "libft.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_ft_isalpha(void)
{
	TEST_ASSERT_TRUE(ft_isalpha('a'));
	TEST_ASSERT_FALSE(ft_isalpha('3'));
}

void test_ft_isdigit (void)
{
	TEST_ASSERT_TRUE(ft_isalpha(3));
	TEST_ASSERT_FALSE(ft_isalpha('a'));
}

void test_ft_isalnum(void)
{
	TEST_ASSERT_TRUE(ft_isalpha('a'));
	TEST_ASSERT_FALSE(ft_isalpha('3'));
}



int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_ft_isalpha);
    return UNITY_END();
}


