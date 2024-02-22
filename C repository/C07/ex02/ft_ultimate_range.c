/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:33:39 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/15 17:43:16 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 10;
	int	max = 21;
	int	*tab;
	int	size = ft_ultimate_range(&tab, min, max);
	int	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
