/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:31:09 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/08 18:45:42 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 40
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	return (0);
}*/
