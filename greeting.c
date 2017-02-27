/* greeting.c - a "hello world" application */

/* preprocessor instructions */
#include <stdio.h>
#include <string.h>

/* Greet only Alice or Bob */
int main()
{
	char name[60];

	printf("Please enter your name.\n");
	scanf("%59[0-9a-zA-Z ]", name);
	if (strcmp(name, "Alice") == 0) {
		printf("Hello %s.\n", name);
	}
	else if (strcmp(name, "Bob") == 0) {
		printf("Hello %s.\n", name);
	}
	else {
		printf("Please see your administrator for user privileges.\n");

	}
	return 0;
} // end function main
