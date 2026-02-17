#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

static void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

static void	ft_putnbr(int n)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

static void	free_tab(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	struct s_stock_str	*tab;
	int					i;

	if (argc < 2)
		return (0);
	tab = ft_strs_to_tab(argc - 1, argv + 1);
	if (!tab)
		return (1);
	i = 0;
	while (tab[i].str)
	{
		ft_putstr("size: ");
		ft_putnbr(tab[i].size);
		ft_putstr("\nstr: ");
		ft_putstr(tab[i].str);
		ft_putstr("\ncopy: ");
		ft_putstr(tab[i].copy);
		ft_putstr("\n\n");
		i++;
	}
	free_tab(tab);
	return (0);
}
