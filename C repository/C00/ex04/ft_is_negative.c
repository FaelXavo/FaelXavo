/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:29:30 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/01 21:17:00 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
	}
	else
	{
		n = 'N';
	}
	write(1, &n, 1);
}
/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}*/
