#include <stdio.h>

/**
 *  print_alphabet - execution begins here
 *
 *  Return: void
 */
void print_alphabet()
{
	char alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return;
}
