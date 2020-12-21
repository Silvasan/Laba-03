#include "pch.h"
#include "C:/Users/Silver/Desktop/Учебники/ГУАП/Информатика/1 семестр. Си/Laba03/Laba03/Library.cpp"

	TEST(Testdelete_lead_and_last_spaces, Only_spaces_and_tabs) {
		char str1[125] = "   \t    \v   \n", *str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}

	TEST(Testdelete_lead_and_last_spaces, Empty_string) {
		char str1[125] = "\n", * str2 = "\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}

	TEST(Testdelete_lead_and_last_spaces, No_spaces_and_tabs) {
		char str1[125] = "string 0123!\n", *str2 = "string 0123!\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}
	TEST(Testdelete_lead_and_last_spaces, Correct) {
		char str1[125] = " \t string \t0123 \t \n", *str2 = "string \t0123\n";
		ASSERT_EQ(delete_spaces(str1), *str2);
	}