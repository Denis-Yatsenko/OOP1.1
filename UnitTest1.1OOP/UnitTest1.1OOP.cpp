#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_1.1/Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11OOP
{
	TEST_CLASS(UnitTest11OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			Goods a1{};
			a1.Init(4, 5);
			t = a1.SetSecond(5);
			Assert::AreEqual(t, 1);

		}
	};
}
