#include "pch.h"
#include "CppUnitTest.h"
#include "../PDC_LAB3_2/source.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestStirlingSecondKind)
        {
            
            auto result = stirling_second_kind(0);
            Assert::AreEqual(1, result[0][0]); 

            
            result = stirling_second_kind(1);
            Assert::AreEqual(1, result[1][1]); 

            
            result = stirling_second_kind(2);
            Assert::AreEqual(1, result[2][2]); 
            Assert::AreEqual(1, result[2][1]); 

            
            result = stirling_second_kind(3);
            Assert::AreEqual(3, result[3][2]); 
            Assert::AreEqual(1, result[3][3]); 
        }

        TEST_METHOD(TestBellNumbers)
        {
            
            auto result = bell_numbers(0);
            Assert::AreEqual(1, result[0]); 

           
            result = bell_numbers(1);
            Assert::AreEqual(1, result[1]); 

            
            result = bell_numbers(2);
            Assert::AreEqual(2, result[2]); 

            
            result = bell_numbers(3);
            Assert::AreEqual(5, result[3]); 
        }
    };
}
