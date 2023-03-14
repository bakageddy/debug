#include <stdio.h>
#include <string.h>

char *reverse(char *string) {
	int len = strlen(string) - 1;
	char temp;
	for (int i = 0; i < len / 2; i++) {
		temp = string[i];
		string[i] = string[len - i];
		string[len - i] = temp;
	}
	return string;
}

int main(void) {
	char string[20] = "dinesh";
	printf("Reverse: %s\n", reverse(string));
	return 0;
}
