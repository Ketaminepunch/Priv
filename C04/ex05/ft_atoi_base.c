/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:48:06 by vsack             #+#    #+#             */
/*   Updated: 2026/02/10 19:51:08 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_base_len(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		if (base[i] == '+' || base [i] == '-' || ft_iswhitespace(base[i]))
			return(0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int ft_index(char c, char *base, int *out)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			*out = i;
			return (1);
		}
		i++;
	}
	return(0);
}

int ft_atoi_base(char *str, char *base)
{
	int sign;
	long result;
	int blen;
	int val;
	int i;

	i = 0;
	sign = 1;
	result = 0;
	blen = ft_base_len(base);
	if (blen == 0)
		return (0);

	while (ft_iswhitespace(str[i]))
		i++;

	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] && ft_index(str[i], base, &val))
	{
		result = result * blen + val;
		i++;
	}
	return ((int)(result * sign));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_atoi_base("    +--+--+-5","0123456789"));
}*/