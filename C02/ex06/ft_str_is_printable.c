/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:05:32 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 18:05:51 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *test[] = {
			"\t",
			"hello",
			"hIlO",
			""
	};
	int i = 0;
	while (test[i] != 0)
	{
		printf("Test \"%s\" -> %d\n", test[i], ft_str_is_printable(test[i]));
		i++;
	}
}*/
