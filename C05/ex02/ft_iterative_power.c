/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:46:37 by vsack             #+#    #+#             */
/*   Updated: 2026/02/09 19:38:16 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	tmp = 1;
	i = power;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		tmp *= nb;
		i--;
	}
	return (tmp);
}
/*
int	main(void)
{
	int nb = 2;
	int power = 3;
	printf("2 to the power of 3 is %d\n", ft_iterative_power(nb, power));
}*/