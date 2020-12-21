#include "Library.h"
int lenght_counter( char arr[]) {
	int a = 0;
	for (int i = 0; arr[i] != '\n'; i++)
		a++;
	return a;
}
int delete_lead_spaces(char arr[], char symbol) {
	int k = 0, count = 0;
	for (int i = 0; arr[i] == symbol; i++) {
		count++;
	}
	while (arr[k] != '\0') {
		arr[k] = arr[k + count];
		k++;
	}
	return *arr;
}
int delete_last_spaces(char arr[], char symbol, int lenght) {
	int i = 0, k = 0, count = 0;
	for ( i = lenght - 1; arr[i] == symbol; i--) {
		count++;
	}
	k = lenght;
	arr[k - count] = '\n';
	while (arr[k-1] == symbol ||arr[k-1] == '\n') {
		arr[k] = '\0';
		k--;
	}
	return *arr;
}
int delete_lead_and_last_spaces(char arr[]) {
	int i = 0, j = 0, lenght = 0;
	while (arr[0] == ' ' || arr[0] == '\t') { 
		switch (arr[0]) {
		case '\t':
		delete_lead_spaces(arr, '\t');
		case ' ':
		delete_lead_spaces(arr, ' ');
		}
	}
	while (arr[(lenght=lenght_counter(arr)) - 1] == ' ' || arr[lenght - 1] == '\t') {
		switch (arr[lenght - 1]) {
		case ' ':
			delete_last_spaces(arr, ' ', lenght);
			continue;
		case '\t':
			delete_last_spaces(arr, '\t', lenght);
		}
	}
	return *arr;
}
