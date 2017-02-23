// Show the difference between the value and address in memory of x
#include <stdio.h>

int main()
{
	int x = 15;

	printf("The value of x is: %d\n", x);
	printf("The address of of x is: %p\n", &x);
}
