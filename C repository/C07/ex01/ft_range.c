/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:53:30 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/14 20:24:28 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	i = min;
	j = 0;
	ptr = (int *)malloc((max - min) * 4);
	while (j < max - min)
	{
		ptr[j] = i;
		j++;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 5;
	int	max = 12;
	int	j;
	int	*array = ft_range(min, max);

	j = 0;
	while (j < max - min)
	{
		printf("%d\n", array[j]);
		j++;
	}
	return (0);
}*/
