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

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	conta(int n)
{
	size_t	i;

	i = 0;
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

	conta (n);
	stri = malloc(n);
	if (!stri)
		return (NULL);
	return (stri);
}

/*int		main ()
{
	printf("%lu \n", conta(-9999));
	return (0);
}*/
