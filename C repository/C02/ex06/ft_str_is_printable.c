/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:51:16 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 16:57:54 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 40
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (!((*temp < 127 && *temp > 32) || *temp == ' ' ))
		{
			return (0);
		}
		temp++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*string = "@";
	int		result = ft_str_is_printable(string);

	printf("%d", result);
	return (0);
}*/
