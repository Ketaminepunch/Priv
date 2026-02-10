/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:22:34 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 21:22:38 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size > 0)
    {
        while (i + 1 < size && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while(src[i] != '\0')
    i++;
    return (i);
    
}
/*
int main(void)
{
    char dest[10];
    ft_strlcpy(dest, "hellos", 10);
    printf("%s ", dest);
}
*/
