/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_programm_name.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:33:10 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/11 20:56:12 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
}
