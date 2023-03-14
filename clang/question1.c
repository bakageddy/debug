#include <stdio.h>
#include <string.h>

char *reverse(char *string) {
	int len = strlen(string);
	char temp;
	for (int i = 0; i < len; i++) {
		temp = string[i];
		string[i] = string[len - i];
		string[len - i] = temp;
	}
	return string;
}

int main(void) {
	char string[20];
	string = "dinesh";
	printf("Reverse: %s\n", reverse((char *) strcpy(string, (char *) NULL)));
	return 0;
}
