/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:41:55 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:46:20 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_join_len(char **strs, int size, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		if (i < size - 1)
			j = j + ft_strlen(sep);
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str2;
	int		i;
	int		k;
	int		l;

	str2 = malloc(sizeof(char) * (ft_join_len(strs, size, sep) + 1));
	if (!str2)
		return (NULL);
	i = 0;
	l = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			str2[l++] = strs[i][k++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				str2[l++] = sep[k++];
		}
		i++;
	}
	str2[l] = '\0';
	return (str2);
}

/*int	main(void)
{
	char	*tab[] = {"brrr", "brrr", "patapim"};
	char	sep[] = "^^";
	char	*str;

	str = ft_strjoin(3, tab, sep);
	printf("%s", str);
	free(str);
	return (0);
}*/
