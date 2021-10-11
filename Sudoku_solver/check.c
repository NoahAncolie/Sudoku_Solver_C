# include "main.h"

int	check_col(int col, int row, int **grid)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][col] == grid[row][i] && i != col)
			return (0);
		i++;
	}
	return (1);
}

int	check_row(int col, int row, int **grid)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][col] == grid[i][col] && i != row)
			return (0);
		i++;
	}
	return (1);
}

int	check_sqr(int col, int row, int **grid)
{
	int	row_start;
	int	col_start;

	col_start = col / 3 * 3;
	while (col_start < col / 3 * 3 + 3)
	{
		row_start = row / 3 * 3;
		while (row_start < row / 3 * 3 + 3)
		{
			if (grid[row][col] == grid[row_start][col_start] && (row != row_start || col != col_start))
				return (0);
			row_start++;
		}
		col_start++;
	}
	return (1);
}

int	ft_check(int row, int col, int **grid)
{
	if (/*check_col(col, row, grid) && */check_sqr(col, row, grid) && check_row(col, row, grid) && check_col(col, row, grid))
		return (1);
	return (0);
}
