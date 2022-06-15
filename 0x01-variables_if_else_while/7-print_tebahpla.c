#include <stdio.h>

/**
 * main - execution begins here
 *
 * Return: Always 0
 */
int main(void)
{
	int lower;

	lower = 122;
	while (lower >= 97)
	{
		putchar(lower);
		lower--;
	}
	putchar(10);
	return (0);
}
