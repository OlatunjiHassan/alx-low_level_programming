#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @letter: integer
 *
 * Return: last digit
 */

int print_last_digit(int letter)
{
	int last_digit = letter % 10;

	if (letter < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
