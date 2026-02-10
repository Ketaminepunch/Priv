/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:18:13 by vsack             #+#    #+#             */
/*   Updated: 2026/02/10 12:41:36 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_is_prime(int nb)
{
	if(nb == 2)
    	return (1);
	int i;
	i = 2;
    if (nb <= i)
        return (0);
    while (i <= nb / i)
    {
      if (nb % i == 0)
        return (0);
      i++;
    }
  return (1);
}

int ft_find_next_prime(int nb)
{
	if(ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
/*
int	main(void)
{
	int nb;

	nb = 90;
	printf("%d \n",ft_find_next_prime(nb));
}*/