#include "Library.h"
int stackoverflow(char arr[], int N) {
	int i = 0, a = 0, tabs = 0, m = 0;
	for (i = 0; arr[i] != '\n'; i++) {
		a++;
		if (arr[i] == '\t')
			tabs++;
	}
	m = a - tabs + tabs * 8;
	if (m >= N) {
		printf("Oh.. Stackoverflow.. ;(\nTry again,please\n");
		for(i=0; i<a; i++)
			arr[i] = NULL;
		return a;
	}
	return 0;
}
int lenght_counter(char arr[]) {
	int a = 0;
	for (int i = 0; arr[i] != '\n'; i++)
		a++;
	return a;
}
int delete_tabs(char arr[]) {
	int i = 0, j = 0, lenght = 0, count = 7;
	lenght = lenght_counter(arr);
	for (i = 0; arr[i] != '\n';i++) {
		if (arr[i] == '\t') {
			for (j = lenght; j != i; j--)
				arr[j + count] = arr[j];
			for (j = i; j <= i + count; j++)
				arr[j] = ' ';
			i += count;
			lenght += count;
			count = 7;
		}
		else {
			count--;
			if (count == -1)
				count = 7;
		}
	}
	return *arr;
}
