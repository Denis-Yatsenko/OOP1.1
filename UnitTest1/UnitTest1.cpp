#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_1.1/Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			Goods a1{};
			a1.Init(4, 5);
			t = a1.Cost();
			Assert::AreEqual(t, 20);
		}
	};
}
