#include "pch.h"
#include "CppUnitTest.h"
#include "../1.7/Payment.h"
#include "../1.7/Payment.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest17
{
	TEST_CLASS(UnitTest17)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment z;
			z.Init(4000, 100,5,4000,0);
			int test = z.�nterestt();
			Assert::AreEqual(4200, test);
		}
	};
}
