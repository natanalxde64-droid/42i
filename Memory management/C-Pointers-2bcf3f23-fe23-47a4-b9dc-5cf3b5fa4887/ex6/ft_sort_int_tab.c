/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:17:49 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/06 17:07:16 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *nbr1, int *nbr2)
{
	int	temp;

	temp = *nbr1;
	*nbr1 = *nbr2;
	*nbr2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (size > 1)
	{
		j = 0;
		while (j < size -1)
		{
			i = 0;
			while (i < size - j - 1)
			{
				if (tab[i] > tab[i + 1])
					ft_swap(&tab[i], &tab[i + 1]);
				i++;
			}
			j++;
		}
	}
}
