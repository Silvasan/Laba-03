#include "pch.h"
#include "C:/Users/Silver/Desktop/Учебники/ГУАП/Информатика/1 семестр. Си/Laba03/Laba03/Library.cpp"

	TEST(Testdelete_tabs, Only_spaces_and_tabs) {
		char str1[125] = "   \t    \v   \n", *str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}

	TEST(Testdelete_tabs, Empty_string) {
		char str1[125] = "\n", * str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}

	TEST(Testdelete_tabs, No_spaces_and_tabs) {
		char str1[125] = "string 0123!\n", *str2 = "string 0123!\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}
	TEST(Testdelete_tabs, Correct) {
		char str1[125] = " \t string \t0123 \t \n", *str2 = "string \t0123\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}