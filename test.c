#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int pepper(int argc, char *argv[])
{
	int i;
	int sum = 0;
	printf("argc = %d\n", argc);
	printf("Lets see what is in argv[]\n");
	for(i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	if (argc > 1)
	{			
		for(i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
			printf("%d\n", sum);
		}
		printf("Total = %d\n", sum);
	}
	

	return 0;
}
