#include "main.h"

/**
 * _islower - to check if a character is a lowercase
 *
 * @letter: letter will be an ascii character
 *
 * Return: 1 if lower case, 0 if not
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
