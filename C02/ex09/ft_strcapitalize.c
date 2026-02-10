/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:49:00 by vsack             #+#    #+#             */
/*   Updated: 2026/02/02 20:09:21 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_alnum(char c)
{
	return (is_lower(c) || is_upper(c) || is_number(c));
}

void	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alnum(str[i]))
		{
			if (new_word && is_lower(str[i]))
				str[i] -= 32;
			else if (!new_word && is_upper(str[i]))
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char s[] = "hello my NAME iS 42sada.... 123 h a s t";


	ft_strcapitalize(s);
	printf("After: %s\n", s);
	return (0);
}
*/