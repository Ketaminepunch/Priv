/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:42:22 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 13:08:36 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char dest[10];

	ft_strncpy(dest, "hello", 3);
	for( int i = 0; i < 10; i++)
	{
			printf("%c", dest[i]);
	}
	printf("\n");

	ft_strncpy(dest, "hi", 5);
	printf("'%s'\n", dest);

	return 0;
}*/	
