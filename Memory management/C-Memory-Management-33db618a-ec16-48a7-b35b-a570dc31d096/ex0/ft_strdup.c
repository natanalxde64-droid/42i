/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:21:51 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/19 21:03:16 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	int		i;
	char	*src;
	char	*dup;

	i = 0;
	src = "Hello";
	dup = ft_strdup(src);
	while (dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	dup = 0;
	return (0);
}*/
