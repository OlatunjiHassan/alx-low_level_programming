#include <stdio.h>

/**
 * main - execution begins here
 *
 * Return: Always 0
 */
int main(void)
{
	char lower, upper;

	lower = 97;
	upper = 65;
	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}
