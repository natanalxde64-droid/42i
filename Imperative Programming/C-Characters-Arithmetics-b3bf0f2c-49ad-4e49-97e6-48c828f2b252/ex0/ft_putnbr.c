/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:24:39 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/03 21:12:41 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;
	long int	div;

	n = nb;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	div = 1000000000;
	while (n / div == 0)
		div = div / 10;
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	while (div >= 1)
	{
		ft_putchar((n / div) + 48);
		n = n % div;
		div = div / 10;
	}
}
