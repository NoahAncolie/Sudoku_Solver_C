#include "main.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write (1, str, i);
}

void	ft_putnbr(int	nb)
{
	unsigned int	nb_swap;
	char		*base;

	base = "0123456789";
	if (nb < 0)
	{
		nb_swap = -nb;
		write (1, "-", 1);
	}
	else
		nb_swap = nb;
	if (nb_swap > 9)
		ft_putnbr (nb_swap / 10);
	write (1, &base[nb_swap % 10], 1);
}

void	ft_print_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr (grid[i][j]);
			write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
