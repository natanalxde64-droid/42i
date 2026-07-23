/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:42:18 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:45:42 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	delta;
	int	*array;

	i = 0;
	delta = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * delta);
	if (!array)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*#include <stdio.h>
int	main()
{
	int	*list;
	int	min;
	int	max;
	int	i;

	min = 5;
	max = 15;
	i = 0;
	list = ft_range(min, max);
	while (i <= max - min - 1){
		printf("[%d]\n", list[i++]);
	}
	free(list);
}*/
