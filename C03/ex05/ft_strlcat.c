/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:47:36 by vsack             #+#    #+#             */
/*   Updated: 2026/02/10 18:28:09 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;	
	unsigned int	s_len;

	s_len = ft_strlen(src);
	d_len = 0;
	while (d_len < size && dest[d_len])
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i + 1) < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

int	main(void)
{
	char	buf[6] = "1337 42";
	unsigned int	ret;

	ret = ft_strlcat(buf, "Born to code", sizeof(buf));
	printf("buf: %s\n", buf);
	printf("ret: %u\n", ret);
	return (0);
}