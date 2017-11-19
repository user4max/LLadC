#include <stdio.h>

int main()
{
	int noOfRows;
	int row, column;
	
	printf("Enter the number of Rows\n");
	scanf("%d", &noOfRows);


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
