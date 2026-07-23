/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 15:59:38 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/23 20:49:47 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_str_copy(char *str, int len)
{
	char	*mot;
	int		i;

	mot = malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mot[i] = str[i];
		i++;
	}
	mot[i] = '\0';
	return (mot);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].copy = ft_str_copy(av[i], ft_strlen(av[i]));
		if (!tab[i].copy)
			return (NULL);
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		i++;
	}
	tab[i].copy = 0;
	tab[i].size = 0;
	tab[i].str = 0;
	return (tab);
}
