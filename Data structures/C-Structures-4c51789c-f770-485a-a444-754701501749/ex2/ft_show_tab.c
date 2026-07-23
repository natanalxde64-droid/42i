/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:18:42 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/23 21:14:37 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

//struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*int main(int argc, char **argv)
{
	struct s_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
	return (0);
}*/
