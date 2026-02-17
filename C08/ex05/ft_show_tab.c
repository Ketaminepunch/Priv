/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:50:36 by vsack             #+#    #+#             */
/*   Updated: 2026/02/17 20:03:35 by vsack            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_stock_str.h"
#include <unistd.h>

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
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
	if (num > 9)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putnbr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
