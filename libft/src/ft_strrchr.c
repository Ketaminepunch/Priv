/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:19:28 by vsack             #+#    #+#             */
/*   Updated: 2026/04/20 19:09:55 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	match;
	int				i;

	i = ft_strlen(*s);
	match = (char)c;
	while (i >= 0)
	{
		if ((char)*s == match)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
