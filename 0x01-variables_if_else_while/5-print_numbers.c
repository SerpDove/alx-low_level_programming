#include <stdio.h>

/**
 * main - Print all single digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');

	return (0);
}
