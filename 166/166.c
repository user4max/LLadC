#include <stdio.h>

int main()
{
	int noOfRows = 5;
	int row, column;

	for (row = 1; row <= noOfRows; row++)
	{
		for (column = 1; column <= row; column ++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return (0);
}
