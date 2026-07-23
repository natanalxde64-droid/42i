/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:31:06 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/09 11:42:24 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] < 'a' || str[i - 1] > 'z') && (
				str[i - 1] < '0' || str[i - 1] > '9') && (
				str[i - 1] < 'A' || str[i - 1] > 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    hate_str[] = ":H\\N#vmvYzb)C0B,{D\r$oQS/ATVk";
    char    expected_hate_str[] = ":H\\N#Vmvyzb)C0b,{D\r$Oqs/Atvk";
    char    *my_hate_str = ft_strcapitalize(hate_str);

    printf("Moulinette hates me test: special characters break terminal\n");
    if (strcmp(my_hate_str, expected_hate_str) == 0)
    {
        printf("%s matches output of %s\n", my_hate_str, expected_hate_str);
    }
    else
    {
        printf("we expected %s but got %s\n", expected_hate_str, my_hate_str);
    }
    return 0;
}*/
