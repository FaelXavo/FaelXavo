/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raxavier <raxavier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:53:26 by raxavier          #+#    #+#             */
/*   Updated: 2024/02/07 18:07:48 by raxavier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		else
		{
			s1++;
			s2++;
			n --;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "ABCXYZ";
	char	str2[] = "ABC123";
	unsigned int	n = 3;
	int		res = ft_strncmp(str1, str2, n);

	printf("This is the first string : %s\n", str1);
        printf("This is the second string : %s\n", str2);
	printf("The result of the function is: %d\n", res);
	return (0);
}*/
