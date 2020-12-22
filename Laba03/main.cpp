#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Library.h"
#define N 300
int main() {
	char str[N] = "", buffer = 0;
	int i = 0;
	while (1) {
		printf("Enter the string: ");
		fgets(str, N, stdin);
		if (!(str[N-2] == '\0' || str[N-2] == '\n')) {
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
	delete_lead_and_last_spaces(str);
	printf("String:\n%s", str);
	getchar();
	return 0;
}