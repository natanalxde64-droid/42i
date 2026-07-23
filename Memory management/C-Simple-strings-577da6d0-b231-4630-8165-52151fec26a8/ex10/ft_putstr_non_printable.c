/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 15:19:32 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/09 11:53:07 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			write(1, hex + str[i] / 16, 1);
			write(1, hex + str[i] % 16, 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
    char    expected_hate_str[] = ":H\\N#Vmvyzb)C0b,{D\r$Oqs/Atvk";
     ft_putstr_non_printable(expected_hate_str);
}*/
