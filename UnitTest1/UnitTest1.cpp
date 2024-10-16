#include "pch.h"
#include "CppUnitTest.h"
#include "../PDC_LAB3_1/source.cpp"   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFactorial)
        {
           
            Assert::AreEqual(1LL, factorial(0));  // 0! = 1
            Assert::AreEqual(1LL, factorial(1));  // 1! = 1
            Assert::AreEqual(120LL, factorial(5)); // 5! = 120
            Assert::AreEqual(3628800LL, factorial(10)); // 10! = 3628800
        }

        TEST_METHOD(TestArrangements)
        {
            
            Assert::AreEqual(60LL, arrangements(5, 3)); // A(5, 3) = 60
            Assert::AreEqual(30LL, arrangements(6, 2)); // A(6, 2) = 30
            Assert::AreEqual(5040LL, arrangements(10, 4)); // A(10, 4) = 5040
            Assert::AreEqual(1LL, arrangements(7, 0)); // A(7, 0) = 1
        }
    };
}
