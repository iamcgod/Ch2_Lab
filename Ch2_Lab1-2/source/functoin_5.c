#include <stdlib.h>
#include <stdio.h>




int _5()
{
	char sign = 'x';
	char sign2 = '-';
	int i, j;
	int temp, temp2;
	temp = 9;
	printf("(5)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", sign);
			}
			else if (j == temp)
			{
				printf("%c", sign);
				temp--;
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	return 0;
}