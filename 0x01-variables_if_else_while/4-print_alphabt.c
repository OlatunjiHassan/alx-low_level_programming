#include <stdio.h>

/**
 * main - execution begins here
 *
 * Return: Always 0
 */
int main(void)
{
	int lower;

	lower = 97;
	while (lower <= 122)
	{
		if (lower == 113 || lower == 101)
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar(10);
	return (0);
}

