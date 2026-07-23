/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:28:51 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/14 14:03:55 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int (i) = 0;
	int (j) = 0;
	int (k) = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			k = k + 1;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			j = j + 1;
		i++;
	}
	if (k == 0 && j == 0)
		return (1);
	if (k == length - 1)
		return (1);
	else if (j == length - 1)
		return (1);
	else
		return (0);
}

/*int	ftaetb(int a, int b)
{
	return(a - b);
}

#include <stdio.h>
int	main()
{
	int tab[] = {};
	printf("%d,", ft_is_sort(tab, 0, &ftaetb));
}*/
