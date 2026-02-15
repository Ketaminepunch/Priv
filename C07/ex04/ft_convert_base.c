/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:03:05 by vsack             #+#    #+#             */
/*   Updated: 2026/02/15 19:45:37 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_len(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		if (base[i] == '+' || base [i] == '-' || 
		(base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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
	if (i < 2)
		return(0);
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

int ft_atoi_base(char *str, char *base, int blen)
{
	int sign;
	long result;
	int val;

	sign = 1;
	result = 0;
	blen = ft_base_len(base);
	if (blen == 0)
		return (0);

	while (ft_iswhitespace(*str))
		str++;

	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	while (*str && ft_index(*str, base, &val))
	{
		result = result * blen + val;
		str++;
	}
	return ((int)(result * sign));
}

char *ft_itoa_base(int nbr, char *base, int blen)
{
	long	n;
	long	tmp;
	int		len;
	int		neg;
	char	*res;

	n = (long)nbr;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	len = 1;
	tmp = n;
	while (tmp >= blen)
	{
		tmp /= blen;
		len++;
	}
	len += neg;
	res = (char *)malloc(len +1);
	if(!res)
		return(NULL);
	res[len] = '\0';
	if (n == 0)
		res[--len] = base[0];
	while (n > 0)
	{
		res[--len] = base[n % blen];
		n /= blen;
	}
	if (neg)
		res[0] = '-';
	return(res);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		from_len;
	int		to_len;
	int		value;

	from_len = ft_base_len(base_from);
	to_len = ft_base_len(base_to);
	if (from_len == 0 || to_len == 0)
		return (NULL);
	value = ft_atoi_base(nbr, base_from, from_len);
	result = ft_itoa_base(value, base_to);
	return (result);
}



/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_atoi_base("    +--+--+-5","0123456789"));
}*/