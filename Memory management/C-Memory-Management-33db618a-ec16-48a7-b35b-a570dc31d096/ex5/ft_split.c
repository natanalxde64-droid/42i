/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:11:49 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 19:46:53 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	j;
	int	sep;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			sep = 1;
		else
			(sep = ft_is_charset(str[i - 1], charset));
		if (sep == 1 && ft_is_charset(str[i], charset) == 0)
			j++;
		i++;
	}
	return (j);
}

char	*ft_str_copy(char *str, int debut_du_mot, int len)
{
	char	*mot;
	int		i;

	mot = malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mot[i] = str[debut_du_mot + i];
		i++;
	}
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**str2;
	int		nb_mots;
	int		i;
	int		j;
	int		debut_du_mot;

	nb_mots = ft_count_words(str, charset);
	str2 = malloc(sizeof(char *) * (nb_mots + 1));
	if (!str2)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(str[i], charset) == 1)
			i++;
		debut_du_mot = i;
		while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
			i++;
		if (i > debut_du_mot)
			str2[j++] = ft_str_copy(str, debut_du_mot, i - debut_du_mot);
	}
	str2[j] = NULL;
	return (str2);
}

/*#include <stdio.h>

int main(void)
{
    char *str;
    char *charset;
    char **array;
    int i;

    str = "jbonjour         je vais bien";
    charset = " ";
    array = ft_split(str, charset);
    i = 0;
    while (array[i] != NULL)
    {
        printf("%s\n", array[i]);
        free(array[i]);
        i++;
    }
    free(array);
    return (0);
}*/
