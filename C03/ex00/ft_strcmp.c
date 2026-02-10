/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:50:01 by vsack             #+#    #+#             */
/*   Updated: 2026/02/03 15:31:32 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	int diff;
	char test1[] = "HALlO";
	char test2[] = "HALlO";

	diff = ft_strcmp(test1, test2);
	printf("Diff: %d", diff);
	return(0);
}
*/
