/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:52:41 by vsack             #+#    #+#             */
/*   Updated: 2026/01/29 20:14:04 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_n(char v[])
{
	if(v[0] == '7' && v[1] == '8' && v[2] == '9')
	{
		write(1, v, 3);
		write(1, ".\n", 2);
	}
	else
	{
		write(1, v, 5);
	}
}

void ft_print_comb(void)
{
	char v[5]; //initializes an array by the name v with the size of 5 bytes 
	
	v[0] = '0'; // says the first byte of the arry has the char 0
	v[3] = ','; // says the 4th byte has the char ,
	v[4] = ' '; // says that the 5th byte is an empty space
	
	while(v[0] <= '7')
	{
		v[1] = v[0] + 1;
		while(v[1] <= '8')
		{
				v[2] = v[1] +1;
				while (v[2] <= '9')
				{
					write_n(v);
					v[2]++;
				}
					v[1]++;
		}
		v[0]++;
	}
}

int main(void)
{
	ft_print_comb();
}	
						
