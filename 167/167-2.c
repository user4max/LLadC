/*
 167-2.c by Carp-Bezverhnii Maxim
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int nb = 4;
	int row, column;

	row = 0;
	while(row <= nb)
	{
		column = 0;
		while (column <= row)
		{
			ft_putchar(row	+ '1');
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}
