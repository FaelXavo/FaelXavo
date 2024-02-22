/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:10:58 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/13 16:24:18 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	b;
	int	i;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b && i <= 46340)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(144));
	return (0);
}*/
