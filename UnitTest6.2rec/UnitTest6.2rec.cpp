#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int i = 1;
			const int n = 5;
			int a[n] = { 1,2,3,4,5 };
			int max = a[0];
			z = Max(a, n, 1, a[0]);
			Assert::AreEqual(z, 5);
		}
	};
}
