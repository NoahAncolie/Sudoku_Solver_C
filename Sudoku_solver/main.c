#include "main.h"

int	main(int ac, char **av)
{
	int	**grid;
	int	i;
	int	j;

	if (ac < 10)
		return (0);
	grid = malloc(9 * sizeof(*grid));
	i = 0;
	while (i < 9)
	{
		grid[i] = malloc (9 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j  = 0;
		while (j < 9)
		{
			grid[i][j] = av[i + 1][j] - '0';
			j++;
		}
		i++;
	}
	ft_print_grid(grid);
	write (1, "\n", 1);
	ft_solve(0, 0, grid);
	ft_print_grid(grid);
	return (0);
}
