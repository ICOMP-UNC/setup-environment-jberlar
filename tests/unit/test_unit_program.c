#include <unity.h>
#include <logic.h>

void test_logic_add(void){
    TEST_ASSERT_EQUAL(8, add(2,6));
    TEST_ASSERT_NOT_EQUAL(8, add(2,5));
}

void test_logic_substract(void){
    TEST_ASSERT_EQUAL(8, substract(10,2));
    TEST_ASSERT_NOT_EQUAL(8, substract(10,24));
}

void test_logic_multiply(void){
    TEST_ASSERT_EQUAL(8, multiply(2,4));
    TEST_ASSERT_NOT_EQUAL(8, multiply(2,8));
}

void test_logic_divide(void){
    TEST_ASSERT_EQUAL(8, divide(16,2));
    TEST_ASSERT_NOT_EQUAL(8, divide(2024,2));
}

void setUp (void){

}

void tearDown (void){

}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
