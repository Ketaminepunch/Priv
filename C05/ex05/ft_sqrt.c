/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:29:08 by vsack             #+#    #+#             */
/*   Updated: 2026/02/09 19:40:36 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_check_guess(int nb, int guess)
{
	long	square;

	square = guess * guess;
	if (square == nb)
		return (guess);
	if (square > nb || guess > 46340)
		return (0);
	return (ft_check_guess(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (ft_check_guess(nb, 1));
}
/*
int	main(void)
{
	int nb;

	nb = 16;
	printf("Squareroot of %d is %d \n", nb, ft_sqrt(nb));
}*/