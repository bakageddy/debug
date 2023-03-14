// Checks if it's a leap year or not

#include <stdio.h>

int leap(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	} else if (year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main(void) {
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	if (leap(year) == 1) {
		printf("%d is a leap year!\n");
	} else {
		printf("%d is not a leap year!\n");
	}

	return 0;
}
