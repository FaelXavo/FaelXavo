/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:29:52 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/05 18:28:34 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp[];
	int		i;
	int		d;

	i = 0;
	d = size -1;
	while (i < size)
	{
		temp[i] = tab[d];
		i++;
		d--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
/*
int	main(void)
{
	int		i = 0;
	int		tab[] = {1, 2, 3, 4, 5};
	int		size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
