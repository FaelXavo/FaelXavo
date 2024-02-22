/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:45:05 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 19:39:57 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 30
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (!((*temp >= 'a' && *temp <= 'z') || (*temp >= 'A' && *temp <= 'Z')))
		{
			if (*temp != ' ')
			{
				return (0);
			}
		}
		temp++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str = "I have 2 siblings";
	int		final_result = ft_str_is_alpha(str);

	printf("%d", final_result);
	return (0);
}*/
