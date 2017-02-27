/* greeting.c - a "hello world" application */

/* preprocessor instructions */
#include <stdio.h>

/* main program */
int main()
{
	char name[60];

	printf("Please enter the name by which you would like to be greeted.\n");
	scanf("%59[0-9a-zA-Z ]", name);
	printf("Hello %s.\n", name);
	return 0;
} // end function main
