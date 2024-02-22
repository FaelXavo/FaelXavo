/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:05:47 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/06 16:07:20 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	size_t		strsize;
	char		*temp;

	temp = str;
	strsize = 0;
	while (*temp != '\0')
	{
		strsize++;
		temp++;
	}
	write(1, str, strsize);
}
/*
int	main(void)
{
	char		*str;

	str = "*Hello World!*\n";
	ft_putstr(str);
	return (0);
}*/
