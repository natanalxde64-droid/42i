/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 02:46:01 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/21 03:13:42 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	u;
	int	signe;

	i = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	u = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		u = u * 10 + str[i] - 48;
		i++;
	}
	return (u * signe);
}
/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("   -42"));
    printf("%d\n", ft_atoi("+42abc"));
    printf("%d\n", ft_atoi("abc42"));
    return (0);
}*/
