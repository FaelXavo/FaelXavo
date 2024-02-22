/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:01:38 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/12 18:14:52 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (result);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 4));
	return(0);
}*/
