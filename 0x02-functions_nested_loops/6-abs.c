#include "main.h"

/**
 * _abs - print absolute value of integers
 *
 * @letter: integer
 *
 * Return: value
 */

int _abs(int letter)
{
	if (letter > 0)
	{
		return (letter);
	}
	else if (letter < 0)
	{
		return (-letter);
	}
	else
	{
		return (0);
	}
}
