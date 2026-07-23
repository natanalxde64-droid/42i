/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:41:33 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/20 22:48:13 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j != argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
		ft_put_str(argc, argv);
	return (0);
}
