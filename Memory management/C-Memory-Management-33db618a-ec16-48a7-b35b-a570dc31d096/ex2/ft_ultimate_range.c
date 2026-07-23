/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:01:07 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:46:00 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	delta;

	i = 0;
	delta = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * delta);
	if (!*range)
		return (-1);
	while (i < delta)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*#include <stdio.h>
int   main()
{
	int min;
	int max;
	int *range;
	int	i;

	min = 5;
	max = 15;
	i = 0;
	ft_ultimate_range(&range, min, max);
	while (i < max - min)
		printf("%d\n", range[i++]);
	free(range);
}*/
