#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			Create(a, 5, -10, 10);
			Assert::AreEqual(a[0], 10);


		}
	};
}
