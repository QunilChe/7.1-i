#include "pch.h"
#include "CppUnitTest.h"
#include "../7.1-i/7.1-i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int** a = new int* [5];
			for (int i = 0; i < 5; i++)
				a[i] = new int[5];
			Create(a, 5, 5, 1, 1);
			int t = a[1][1];
			Assert::AreEqual(t, 1);
		}
	};
}
