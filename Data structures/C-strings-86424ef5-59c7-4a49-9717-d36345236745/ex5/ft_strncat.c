/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 01:43:01 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/21 02:57:58 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
    char dest[100];
    char *src;

    dest[0] = '\0';
    src = "Hello, 42!";
    ft_strncat(dest, src, 5);
    printf("dest: %s\n", dest);
    ft_strncat(dest, src, 3);
    printf("dest: %s\n", dest);
    return (0);
}*/
