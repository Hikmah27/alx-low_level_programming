#include <stdio.h>

/**
*  main - prints the size of various types
*  Return: returns the value 0 if exit properly, non-zero otherwise
*/
int main(void)
{
	int a;
	double b;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(b));
	printf("The size of an char is: %lu.\n", (unsigned long)sizeof(c));

	return (0);
}
