/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:35:34 by vsack             #+#    #+#             */
/*   Updated: 2026/02/10 19:39:33 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	base_length(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}
static int	valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base_length(base) < 2)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while(base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}	
	return (1);
}
void ft_putnbr_base(int nbr, char *base)
{
	long nb;
	int blen;


	if(!valid_base(base))
		return;
	blen = base_length(base);
	if(blen < 2)
		return ;
	nb = (long) nbr;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb >= blen)
		ft_putnbr_base((nb / blen), base);
	write(1, &base[nb % blen], 1);
}
/*
int	main(void)
{
	ft_putnbr_base(-0 , "");
}*/