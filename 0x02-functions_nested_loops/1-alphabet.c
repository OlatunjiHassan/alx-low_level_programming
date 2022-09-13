#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the letters of the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
}
