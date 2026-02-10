/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:01:57 by vsack             #+#    #+#             */
/*   Updated: 2026/01/29 20:17:13 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void makenum(int n)
{
	int c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			makenum(a);
			write(1, " ", 1);
			makenum(b);
			if (a == 98 && b == 99)
				return;
			else
				write(1, ", ", 2);
			b++;			
		}
		a++;
	}

}
int	main(void)
{
	ft_print_comb2();
}
