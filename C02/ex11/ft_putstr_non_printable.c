/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:43:36 by vsack             #+#    #+#             */
/*   Updated: 2026/02/03 14:32:29 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

void	make_hex(unsigned char c)
{
	char	hex[2];

	hex[0] = "0123456789abcdef" [c / 16];
	hex[1] = "0123456789abcdef" [c % 16];
	write(1, "\\", 1);
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (is_printable(c))
			write(1, &c, 1);
		else
			make_hex(c);
		i++;
	}
}
/*
int main(void)
{
    char test[] = "Hello\nHow are you?";
    char test1[] = "\n \n \n Mas\n ASAD";


    ft_putstr_non_printable(test);
    write(1, "\n", 1);
     ft_putstr_non_printable(test1);
    write(1, "\n", 1);
}*/
