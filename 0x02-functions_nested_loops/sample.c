#include <stdio.h>
#include "_putchar.h"

int main(void)
{
	int min1, min2, hr1, hr2;
	hr2 = 0;
	hr1 = 0;
			min1 = 0;
			while (min1 < 6)  {                                                                                                                       min2 = 0;                                                                                                               while (min2 <= 9)                                                                                                       {                                                                                                                               _putchar(hr1);
				_putchar(hr2);
				_putchar(':');
				_putchar(min1);
				_putchar(min2);
				_putchar('\n');                                                                                                         return (0);                                                                                                             min1++;                                                                                                         }                                                                                                                       min2++;                                                                                                                 }                                                                                                               } 


