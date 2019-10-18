#include <stdlib.h>
#include <stdio.h>




int _1()
{
	char sign = 'x';
	char sign2 = '-';
	int i, j;
	int temp, temp2;
	printf("(1)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		printf("\n");
	}
	return 0;
}