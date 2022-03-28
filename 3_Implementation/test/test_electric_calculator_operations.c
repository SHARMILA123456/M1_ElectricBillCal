#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Electric Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_sub(void) {
  TEST_ASSERT_EQUAL(-3, sub(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, sub(1000, 900));
}

void test_mul(void) {
  TEST_ASSERT_EQUAL(0, mul(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, mul(2, 5));
}

void test_div(void) {
  TEST_ASSERT_EQUAL(0, div(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, div(2, 2));
}
