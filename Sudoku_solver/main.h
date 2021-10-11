# ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_print_grid(int **grid);
int	ft_check(int row, int col, int **grid);
int	ft_solve(int row, int col, int **grid);

#endif
