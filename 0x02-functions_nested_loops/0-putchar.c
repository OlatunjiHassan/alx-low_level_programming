#include <stdio.h>
#include "main.h"


/**
 *  main - proper execution starts here
 *
 *  Return: 0 (success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
