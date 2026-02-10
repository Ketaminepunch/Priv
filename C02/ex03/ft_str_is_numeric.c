/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:56:38 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 17:12:33 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *test[] = {
			"123123123",
			"1234d",
			"",
			" "
	};
	int i = 0;
	while (test[i] != 0)
	{
			printf("Test \"%s\" -> %d\n", test[i], ft_str_is_numeric(test[i]));
			i++;
	}
}*/
