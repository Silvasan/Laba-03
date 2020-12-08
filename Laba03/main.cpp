#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Library.h"
int main() {
	char str[125] = "", buffer = 0;
	int i = 0;
	while (1) {
		printf("Enter the string: ");
		fgets(str, 125, stdin);
		if (!(str[123] == '\0' || str[123] == '\n')) {
			buffer = getchar();
			if (buffer != '\n') {
				while (buffer != '\n')			//buffercleaner
					scanf("%c", &buffer);
				printf("\nChecking an array for overflow...\n\nError! Please try again.\n\n");
			}
			else {
				printf("\nChecking an array for overflow...\n\nSuccessfully!\n\n");
				break;
			}
		}
		else {
			printf("\nChecking an array for overflow...\n\nSuccessfully!\n\n");
			break;
		}
	}
	delete_spaces(str);
	printf("String:\n%s", str);
	getchar();
	return 0;
}