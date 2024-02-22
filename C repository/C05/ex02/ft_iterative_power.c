/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:29:47 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/12 17:40:55 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (result);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 3));
	return(0);
}*/
