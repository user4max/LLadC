/*
 166-2.c by Carp-Bezverhnii Maxim
 */ 

#include <unistd.h>

int main()
{
	int nb = 5;
	int row, column;

	row = 1;
	while (row <= nb)
	{
		column = 1;
		while (column <= row)
		{
			write(1, "* ", 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}
