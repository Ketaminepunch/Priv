/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:13:15 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 17:23:48 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *test[] = {
			"HELLO",
			"hello",
			"hIlO",
			""
	};
	int i = 0;
	while (test[i] != 0)
	{
		printf("Test \"%s\" -> %d\n", test[i], ft_str_is_lowercase(test[i]));
		i++;
	}
}*/
