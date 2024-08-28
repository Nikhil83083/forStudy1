#include<stdio.h>
/*
 1
 10
 101
 1010
 101010
*/ 
int main()
{
	int row = 5;
	int col = 5;

	for (row = 1; row <= 5; row++)
	{
		for (int j = 1; j <= row;j++)
		{
			if (j % 2 == 0)
			{
				printf("0");
			}
			else 
			{
				printf("1");
			}
		}
		printf("\n");
		col--;
	}

	return 0;
}