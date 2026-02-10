/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:04:38 by vsack             #+#    #+#             */
/*   Updated: 2026/02/04 14:11:43 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
		write(1, &c, 1)
}
void	ft_putnbr(int nb)
{
		if (nb == -2147483648)
		{
			putchar('-');
			putchar('2');
			ft_putnbr(147483648);
		}
		else if(nb < 0)
		{
			putchar('-');
			nb = -nb;
			ft_putnbr(nb);
		}
		else if(nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			putchar(nb + '0')
		}
}
