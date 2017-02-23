// Ask the user to input two integera; display the sum
#include <stdio.h>

int main()
{
	int x, y;

	printf("Give me two integers, and I'll add them together.\n");
	printf("Please enter your first integer.\n");
	scanf("%d", &x);
	printf("Please enter your second integer.\n");
	scanf("%d", &y);
	printf("The sum of your numbers is: %d\n", x + y);
	return 0;
} // end function main
