#include "pch.h"
#include "C:/Users/Silver/Desktop/Учебники/ГУАП/Информатика/1 семестр. Си/Laba03/Laba03/Library.cpp"

	TEST(Testdelete_spaces, Only_spaces) {
		char str1[125] = "   \t    \t   \n", *str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}
	TEST(Testdelete_spaces, Empty_string) {
		char str1[125] = "\n", *str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}
	TEST(Testdelete_spaces, Correct) {
		char str1[125] = " \t stri\tng 0123 \t \n", *str2 = "string 0123\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}