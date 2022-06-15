#include <stdio.h>

/**
 *  main - execution begins here
 *
 *  Return: Always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
