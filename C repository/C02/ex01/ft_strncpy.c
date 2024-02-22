/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:19:14 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 19:33:25 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#define SIZE 40

char	*ft_strncpy(char *dest, char *src, unsigned int n )
{
	size_t		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	destination[SIZE] = "abcdefg";
	char	source[SIZE] = "123456789";
	unsigned int		n = 3;

	printf("The original destination = \"%s\"\n", destination);
	ft_strncpy(destination, source, n);
	printf("The new destination = \"%s\"\n", destination);
	return (0);
}*/
