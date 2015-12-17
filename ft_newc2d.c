/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newc2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdieulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:08:42 by rdieulan          #+#    #+#             */
/*   Updated: 2015/12/09 16:11:07 by rdieulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_newc2d(size_t i, size_t j)
{
	size_t	k;
	char	**tab;

	k = 0;
	tab = (char **)ft_memalloc(sizeof(char *) * i);
	while (k < j)
	{
		tab[k] = (char *)ft_memalloc(sizeof(char) * j);
		k++;
	}
	return (tab);
}
