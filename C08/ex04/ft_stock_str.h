/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsack <vsack@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:23:09 by vsack             #+#    #+#             */
/*   Updated: 2026/02/17 19:40:46 by vsack            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}			t_stock_str;

t_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
