/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:49:30 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/12 16:31:38 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkerror(int nb)
{
	int	int_max;

	int_max = 2147483647;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > int_max)
	{
		return (0);
	}
	return (1);
}

int	ft_iterative_factorial(int nb)
{
	int	error;
	int	temp;

	temp = 1;
	error = checkerror(nb);
	if (error == 1)
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			while (nb != 1)
			{
				temp *= nb;
				nb--;
			}
			return (temp);
		}
	}
	return (checkerror(nb));
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
	return(0);
}*/
