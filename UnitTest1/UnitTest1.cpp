#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_2/lab_8_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestCountAInLastWord)
        {
            string lastWord;

            // Тест 1: Звичайний випадок
            string input1 = "Hello world apple";
            size_t result1 = CountAInLastWord(input1, lastWord);
            Assert::AreEqual((size_t)1, result1);
            Assert::AreEqual(string("apple"), lastWord);

            // Тест 2: Без літер 'a'
            string input2 = "Hello world";
            size_t result2 = CountAInLastWord(input2, lastWord);
            Assert::AreEqual((size_t)0, result2);
            Assert::AreEqual(string("world"), lastWord);

            // Тест 3: Лише пробіли
            string input3 = "     ";
            size_t result3 = CountAInLastWord(input3, lastWord);
            Assert::AreEqual((size_t)0, result3);
            Assert::AreEqual(string(""), lastWord); // останнє слово пусте

            // Тест 4: Різні регістри
            string input4 = "A apple a";
            size_t result4 = CountAInLastWord(input4, lastWord);
            Assert::AreEqual((size_t)1, result4);
            Assert::AreEqual(string("a"), lastWord);
        }

	};
}
