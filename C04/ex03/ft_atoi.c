/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:44:42 by vsack             #+#    #+#             */
/*   Updated: 2026/02/10 17:44:57 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int i;
	int res;
	int negative;
	
	negative = 1;
	i = 0;
	res = 0;
	while ((str[i]>= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		negative *= -1;
	i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{	
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * negative);
}
/*
int	main(void)
{
	char name[] = "---123123";
	int result = ft_atoi(name);
	printf("%d", result);
}*/
