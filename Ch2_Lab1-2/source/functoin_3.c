#include <stdlib.h>
#include <stdio.h>




int _3()
{
	char sign = 'x';
	char sign2 = '-';
	int i, j;
	int temp, temp2;
	temp = 4;
	temp2 = 5;
	printf("(3)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < 5 && j == temp)
			{
				printf("%c", sign);
				temp--;
			}
			else if (i < 5 && j == temp2)
				printf("%c", sign);
			else if (i == 4)
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		temp2++;
		printf("\n");
	}
	return 0;
}