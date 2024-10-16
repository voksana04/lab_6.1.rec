#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_6.1_rec\Project_6.1_rec\lab_6.1_rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestGenerateArray)
        {
            const int SIZE = 20;
            const int MIN_VALUE = -20;
            const int MAX_VALUE = 50;
            int arr[SIZE];

            generateArray(arr, SIZE, MIN_VALUE, MAX_VALUE);

            for (int i = 0; i < SIZE; i++) {
                Assert::IsTrue(arr[i] >= MIN_VALUE && arr[i] <= MAX_VALUE);
            }
        }

        TEST_METHOD(TestCountAndSumElements)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 6, -10, 18, 5, 30 }; 
            int expected_count = 3; 
            int expected_sum = 53; 
            int count, sum;

            countAndSumElements(arr, SIZE, count, sum);

            Assert::AreEqual(expected_count, count); 
            Assert::AreEqual(expected_sum, sum); 
        }

        TEST_METHOD(TestReplaceSpecificElements)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 6, 10, -18, 5, 30 }; 
            int expected_result[SIZE] = { 6, 0, -18, 0, 0 }; 

            replaceSpecificElements(arr, SIZE);

            for (int i = 0; i < SIZE; i++) {
                Assert::AreEqual(expected_result[i], arr[i]); 
            }
        }
    };
}