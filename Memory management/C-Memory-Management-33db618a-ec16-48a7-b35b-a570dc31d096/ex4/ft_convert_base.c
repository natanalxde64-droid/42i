/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 21:46:15 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:46:39 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_base(char *base, char nbr);
int	ft_is_valid_base(char *base);
int	ft_check_count(int nbr, char *base_to, int *m);
int	ft_has_duplicate(char *base);
int	ft_is_valid_nbr(char *nbr, char *base_from);

int	ft_str_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *nbr, char *base_from)
{
	int	signe;
	int	i;
	int	u;
	int	j;

	i = 0;
	u = 0;
	signe = 1;
	if (nbr[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (nbr[i] == '+')
		i++;
	j = ft_str_len(base_from);
	while (nbr[i] != '\0')
	{
		u = u * j + (ft_is_base(base_from, nbr[i]));
		i++;
	}
	return (u * signe);
}

char	*ft_itoa(int nbr, char *base_to)
{
	char	*result;
	int		size_base;

	int (j) = 0;
	int (m) = 0;
	size_base = ft_str_len(base_to);
	j = ft_check_count(nbr, base_to, &m);
	if (nbr < 0)
		nbr = -nbr;
	result = malloc(sizeof(char) * (j + 1));
	if (!result)
		return (NULL);
	result[j] = '\0';
	while (j > m)
	{
		result[j - 1] = base_to[nbr % size_base];
		nbr = nbr / size_base;
		j--;
	}
	if (m == 1)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len;
	char	*len2;

	if (!ft_is_valid_base(base_from) || (!ft_is_valid_base(base_to)))
		return (NULL);
	if (!ft_is_valid_nbr(nbr, base_from))
		return (NULL);
	len = ft_atoi(nbr, base_from);
	len2 = ft_itoa(len, base_to);
	return (len2);
}

/*#include <unistd.h>
void	ft_test(char *nbr, char *base_from, char *base_to)
{
	char	*result;
 
	result = ft_convert_base(nbr, base_from, base_to);
	if (result)
		write(1, result, ft_str_len(result));
	else
		write(1, "Error", 5);
	write(1, "\n", 1);
	free(result);
}
 
int	main(void)
{
	ft_test("42", "0123456789", "01");
	ft_test("-42", "0123456789", "01");
	ft_test("101010", "01", "0123456789");
	ft_test("FF", "0123456789ABCDEF", "01");
	ft_test("0", "0123456789", "67");
	ft_test("42", "0011223", "0123456789");
	return (0);
}*/
