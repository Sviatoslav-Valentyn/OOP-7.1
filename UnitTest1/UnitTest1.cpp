#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> test = { 1, 2, 99,4 };
			auto max = *max_element(test.begin(), test.end());
			Assert::AreEqual(99, max);
		}
	};
}
