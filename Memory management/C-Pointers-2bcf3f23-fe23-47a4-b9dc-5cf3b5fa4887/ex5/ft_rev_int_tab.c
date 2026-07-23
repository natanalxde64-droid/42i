/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:03:46 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/06 17:19:21 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main()
{
	int tab[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int i;

	i = 0;
	while(i <= 8)
	{
	printf("%d,",tab[i]);
	i++;
	}
	printf("\n,");
	ft_rev_int_tab(tab, 9);

	i = 0;
	while(i <= 8)
	{
	printf("%d,",tab[i]);
	i++;
	}
}*/
