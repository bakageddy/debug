#include <stdio.h>


int gcd(int x, int y) {
	if (y == 0) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}

int main(int argc, char **argv) {
	int x, y;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
	return 0;
}
