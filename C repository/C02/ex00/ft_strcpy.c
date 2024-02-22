/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:13:27 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/08 17:52:29 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 40

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[SIZE] = "This is the source string";
	char	destination[SIZE] = "This is the destination string";

	printf("destination is originally = \"%s\"\n", destination);
	ft_strcpy(destination, source);
	printf("after strcpy, destination becomes \"%s\"\n", destination);
	return (0);
}*/
