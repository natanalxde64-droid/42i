/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:38:24 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/03 14:27:56 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 < 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + 48);
			ft_putchar(nb1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + 48);
			ft_putchar(nb2 % 10 + 48);
			ft_putchar(',');
			ft_putchar(' ');
			nb2++;
		}
		nb1++;
	}
	write(1, "98 99", 5);
}
