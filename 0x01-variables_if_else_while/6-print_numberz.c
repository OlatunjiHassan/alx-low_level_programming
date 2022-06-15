#include <stdio.h>

/**
 * main - execution begins here
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number);
		number++;
	}
	putchar(10);
	return (0);
}
