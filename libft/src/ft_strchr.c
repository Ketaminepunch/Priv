/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:02:13 by vsack             #+#    #+#             */
/*   Updated: 2026/04/20 17:17:22 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	match;

	match = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == match)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == match)
		return ((char *)s);
	return (0);
}
