/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:39:36 by vsack             #+#    #+#             */
/*   Updated: 2026/02/09 17:21:34 by vsack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

static void	ft_sort_argv(int n, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	while (i < n)
	{
		tmp = argv[i];
		j = i - 1;
		while (j >= 1 && ft_strcmp(argv[j], tmp) > 0)
		{
			argv[j + 1] = argv[j];
			j--;
		}
		argv[j + 1] = tmp;
		i++;
	}
}

static void	ft_print_argv(int n, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_sort_argv(argc, argv);
	ft_print_argv(argc, argv);
}
