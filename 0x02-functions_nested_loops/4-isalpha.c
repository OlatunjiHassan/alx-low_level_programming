#include "main.h"

/**
 * _isalpha - to check if a character is an alphabet
 *
 * @letter: letter will be an ascii character
 *
 * Return: 1 if lower case, 0 if not
 */

int _isalpha(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
