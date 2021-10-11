#include "main.h"

int	ft_solve(int row, int col, int **grid)
{
	int	nb;

	if (col == 9)
	{
		row += 1;
		col = 0;
	}
	if (row == 9)
		return (1);
	nb = 1;
	while (nb < 10)
	{
		if (grid[row][col] == 0)
		{
			grid[row][col] = nb;
			if (ft_check(row, col, grid))
				if (ft_solve(row, col + 1, grid))
					return (1);
			grid[row][col] = 0;
		}
		else
			return (ft_solve(row, col + 1, grid));
		nb++;
	}
	return (0);
}
