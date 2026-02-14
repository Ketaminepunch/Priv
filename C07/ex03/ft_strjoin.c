/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 20:34:15 by vsack             #+#    #+#             */
/*   Updated: 2026/02/14 20:32:44 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_empty(void)
{
	char *res;

	res = malloc(1);
	if(!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

static int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;
	int	sep_len;

	i = 0;
	total = 0;
	sep_len = ft_strlen(sep);

	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total + sep_len * (size - 1));
	
}

void	ft_cpy(char *dst, char *src, int *k)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dst[*k] = src[j];
		(*k)++;
		j++;
	}
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		total;
	char	*res;
	
	i = 0;
	k = 0;
	if (size == 0)
		return(ft_empty());
	total = total_len(size, strs, sep);
	res = malloc(total + 1);
	if (!res)
		return (NULL);
	while (i < size)
	{
		ft_cpy(res, strs[i], &k);
		if (i < size - 1)
			ft_cpy(res, sep, &k);
		i++;
	}
	res[k] = '\0';
	return (res);
}

#include <unistd.h>
int	main(void)
{
	char *arr[] = {"HELLO", "MYNAMEIS", "EMINEM"};
	char *result;
	int i;

	result = ft_strjoin(3, arr, " - ");
	if(!result)
		return (1);
	i = 0;
	while (result[i])
	{
		write(1, &result[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(result);
}