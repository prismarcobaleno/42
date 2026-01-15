/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:14:34 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/15 15:40:29 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static size_t	conta(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		i = 1;
		n *= -1;
	}
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*stri;
	long	num;
	size_t	i;

	num = (long) n;
	i = conta (num);
	stri = malloc(sizeof(char) * (i + 1));
	if (!stri)
		return (NULL);
	stri[i + 1] = '\0';
	stri[0] = '0';
	if (n < 0)
	{
		stri[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		i--;
		stri[i] = ((num % 10) + 48);
		num = num / 10;
	}
	return (stri);
}
/*int		main ()
{
	int	i = -2147483648;
	printf("%lu \n", conta(i));
	printf("%s \n", ft_itoa(i));
	return (0);
}*/