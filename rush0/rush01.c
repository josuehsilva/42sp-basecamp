#include <unistd.h>
#include "ft_putchar.h"

void	handleWalls(int currentX, int currentY, int x, int y)
{
	if (currentX == 0 || currentY == 0 || currentX == x - 1
		||currentY == 0 || currentX == 0 || currentY == y - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	draw(int currentX, int currentY, int x, int y)
{
	if (currentX == 0 && currentY == 0)
	{
		ft_putchar('/');
	}
	else if (currentX == x - 1 && currentY == 0)
	{
		ft_putchar('\\');
	}
	else if (currentX == 0 && currentY == y - 1)
	{
		ft_putchar('\\');
	}
	else if (currentX == x - 1 && currentY == y - 1)
	{
		ft_putchar('/');
	}
	else
	{
		handleWalls(currentX, currentY, x, y);
	}
}

void	rush(int x, int y)
{
	int	currentX ;
	int	currentY ;

	if (x > 0 && y > 0)
	{
		currentY = 0;
		while (currentY < y)
		{
			currentX = 0;
			while (currentX < x)
			{
				draw(currentX, currentY, x, y);
				currentX++;
			}
			ft_putchar('\n');
			currentY++;
		}	
	}
	else
	{
		write(1, "You have used an invalid number! \n", 34);
	}
}
