/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:10:49 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 16:08:29 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int			size;
	char		*temp;

	size = 0;
	temp = str;
	while (*temp != '\0')
	{
		size++;
		temp++;
	}
	return (size);
}
/*
int	main(void)
{
	char		*str;

	str = "Rafael";
	printf("%d", ft_strlen(str));
	return (0);
}*/
