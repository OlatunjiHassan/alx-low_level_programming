#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the letters of the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
	}
}
