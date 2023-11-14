#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1.string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB81string
{
	TEST_CLASS(UnitTest1LAB81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str);
			Assert::AreEqual(2, result);
		}
	};
}
