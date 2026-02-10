/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:11:28 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 15:17:00 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
			"Hello",
			"Hello1",
			"moyisasda414142!!",
			"",
			" ",
			0
	};
	int i = 0;
	while (test[i] != 0)
	{
		printf("Test \"%s\" -> %d\n", test[i], ft_str_is_alpha(test[i]));
		i++;
	}
}*/
