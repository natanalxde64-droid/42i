/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 01:16:00 by nathalex          #+#    #+#             */
/*   Updated: 2026/07/21 05:09:47 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>

  int main(void)
  {
  char *s1;
  char *s2;

  s1 = "Hello, 42!";
  s2 = "Hello, world!";
  printf("cmp 5 : %d\n", ft_strncmp(s1, s2, 5));
  printf("cmp 8 : %d\n", ft_strncmp(s1, s2, 8));
  printf("cmp 20: %d\n", ft_strncmp(s1, s2, 20));
  return (0);
  }*/
