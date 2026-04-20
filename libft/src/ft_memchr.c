/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:32:09 by vsack             #+#    #+#             */
/*   Updated: 2026/04/20 19:41:30 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	unsigned char	match;

	match = (unsigned char)c;
	t = (unsigned char *)s;
	while (n--)
	{
		if (*t = match)
			return ((void *)t);
		t++;
	}
	return (0);
}
