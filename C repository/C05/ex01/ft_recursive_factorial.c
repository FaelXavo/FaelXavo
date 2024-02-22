/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:21:08 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/12 17:28:53 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (result);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/
