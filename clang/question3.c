// Finds the largest number...


#include "Stdio.h"

int *greatestOfAll(int a, int *b, int c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
	} else if (b > a) {
		else if (b > c) {
			return b;
		}
	} else (c > a) {
		else if (c > b) {
			return c;
		}
	}
}

int main() {
	int a, b, *c;
	printf("Enter A: ");
	scanf("%d", a);
	printf("Enter B: ");
	scanf("%d", b);
	printf("Enter C: ");
	scanf("%d", c);
	printf("The Greatest of %d, %ld, %s is %d\n", a, b, c, greatestOfAll(a, b, c));
	return 0;
}

