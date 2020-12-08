#include "Library.h"
int delete_spaces(char arr[]) {
	int i = 0, j = 0, k = 0, count = 0, lenght = 0;
	char spaces[] = { ' ','\v','\t' };
	for (i = 0; arr[i] != '\n'; i++) {
		for (j = 1; j <= 2; j++) {
			if (arr[i] == spaces[j]) {
				count = 0;
				for (int m = i; arr[m] == spaces[j]; m++) {
					count++;
				}
				k = i;
				while (arr[k] != '\0') {
					arr[k] = arr[k + count];
					k++;
				}
			}
		}
	}
	k = 0, count = 0;
	if (arr[0] == spaces[0]) {
		for (i = 0; arr[i] == spaces[0]; i++) {
			count++;
		}
		while (arr[k] != '\0') {
			arr[k] = arr[k + count];
			k++;
		}
	}
	for (i = 0; arr[i] != '\n'; i++)
		lenght++;
	if (arr[lenght--] == spaces[0]) {
		for (i = lenght; arr[i] == spaces[0]; i--) {
			count++;
		}
		k = lenght;
		while (arr[k] == ' ') {
			arr[k] = '\0';
			k--;
		}
	}
	return *arr;
}
