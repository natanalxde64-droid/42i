/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:41:23 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/03 12:25:26 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	nb;

	nb = 0;
	while (nb <= 689)
	{
		if ((nb / 100 < nb / 10 % 10) && (nb / 10 % 10 < nb % 10))
		{
			ft_putchar(nb / 100 + 48);
			ft_putchar(nb / 10 % 10 + 48);
			ft_putchar(nb % 10 + 48);
			ft_putchar(',');
			ft_putchar(' ');
		}
		nb = nb + 1;
	}
	write (1, "789", 3);
}
