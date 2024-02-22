/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:29:24 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 16:06:22 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempb;
	*b = tempa;
}
/*
int	main()
{
	int	num1 = 5;
	int	num2 = 10;
	ft_swap(&num1, &num2);
}*/
