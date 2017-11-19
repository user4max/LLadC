#include <stdio.h>

int main()
{
	int noOfRows = 5;
	int row, column;
	
	printf("Pls Enter the number of Rows\n");
	scanf("%d", &noOfRows);
	for (row = 1; row <= noOfRows; row++)
	{
		for (column = 1; column <= row; column++)
		{
			printf("%d\t", row);
		}
		printf("\n");
	}
	return (0);
}
