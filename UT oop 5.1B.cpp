#include "pch.h"
#include "CppUnitTest.h"
#include "../oop 5.1B/FuzzyNumber.cpp"
#include "../oop 5.1B/Exception.cpp"
#include "../oop 5.1B/InheritedException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UToop51B
{
	TEST_CLASS(UToop51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(4, 1, 7);
			FuzzyNumber B(6, 3, 9);

			FuzzyNumber C = A + B;
			Assert::AreEqual(C.get_x(), 10.0);
		}
	};
}
