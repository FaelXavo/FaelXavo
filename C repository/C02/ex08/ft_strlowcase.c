/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:58:31 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 19:02:37 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 40
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || *str == ' ' ))
		{
			if (*str >= 'A' && *str <= 'Z')
			{
				*str += 32;
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
	char	*result = ft_strlowcase(string);

	printf("%s", result);
	return (0);
}*/
