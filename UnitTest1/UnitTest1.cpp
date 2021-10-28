#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x = 0, n = 0;
			int t;
			t = (x * x) * (2 * n + 1);
			Assert::AreEqual(t, 0);
		}
	};
}