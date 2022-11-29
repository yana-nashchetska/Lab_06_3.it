#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3.it/Lab_06_3.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD( TestMethod1)
		{

			int m[3] = { 5, 4, 7 };
			Inverse(m, 3);

			Assert::AreEqual(m[0], 7);
		}
	};
}
