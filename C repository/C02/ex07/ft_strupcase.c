/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:22:39 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 19:05:16 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 40
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || *str == ' ' ))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	string[] = "doiDeras";
	char	*result = ft_strupcase(string);

	printf("%s", result);
	return (0);
}*/
