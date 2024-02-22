/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:30:42 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 18:05:46 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_soft_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	if (size <= 1)
	{
		return ;
	}
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main(void)
{
	int		i = 0;
	int		tab[] = {5, 3, 2, 1, 10};
	int		size = sizeof (tab) / sizeof (tab[0]);

	ft_soft_int_tab (tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf ("\n");
	return (0);
}
