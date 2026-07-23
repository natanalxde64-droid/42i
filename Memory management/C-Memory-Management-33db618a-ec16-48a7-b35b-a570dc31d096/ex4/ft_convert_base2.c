/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 21:46:15 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:19:09 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *base);

int	ft_is_base(char *base, char nbr)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_count(int nbr, char *base_to, int *m)
{
	int	j;
	int	size_base;

	j = 0;
	size_base = ft_str_len(base_to);
	if (nbr < 0)
	{
		nbr = -nbr;
		j++;
		*m = 1;
	}
	if (nbr == 0)
		j++;
	while (nbr != 0)
	{
		nbr = nbr / size_base;
		j++;
	}
	return (j);
}

int	ft_has_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_valid_base(char *base)
{
	int	i;

	if (ft_str_len(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	if (ft_has_duplicate(base))
		return (0);
	return (1);
}

int	ft_is_valid_nbr(char *nbr, char *base_from)
{
	int	i;

	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	if (nbr[i] == '\0')
		return (0);
	while (nbr[i] != '\0')
	{
		if (ft_is_base(base_from, nbr[i]) == -1)
			return (0);
		i++;
	}
	return (1);
}
