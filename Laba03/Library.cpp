#include "Library.h"
int delete_spaces(char arr[]) {
	int i = 0, j = 0, k = 0, count = 0, lenght = 0;
	for (i = 0; arr[i] != '\n'; i++) {
		switch (arr[i]) {
		case '\v':
			count = 0;
			for (j = i; arr[j] == '\v'; j++) {
				count++;
			}
			k = i;
			while (arr[k] != '\0') {
				arr[k] = arr[k + count];
				k++;
			}
			i--;
		case '\t':
			count = 0;
			for (j = i; arr[j] == '\t'; j++) {
				count++;
			}
			k = i;
			while (arr[k] != '\0') {
				arr[k] = arr[k + count];
				k++;
			}
			i--;
		}
	}
	k = 0, count = 0;
	if (arr[0] == ' ') { 
		for (i = 0; arr[i] == ' '; i++) {
			count++;
		}
		while (arr[k] != '\0') {
			arr[k] = arr[k + count];
			k++;
		}
	}
	count = 0;
	for (i = 0; arr[i] != '\n'; i++)
		lenght++;
	if (arr[lenght - 1] == ' ') {
		for (i = lenght - 1; arr[i] == ' '; i--) {
			count++;
		}
		k = lenght;
		arr[k - count] = '\n';
		while (arr[k - 1] == ' ' || arr[k - 1] == '\n') {
			arr[k] = '\0';
			k--;
		}
	}
	return *arr;
}
