/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:14 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/15 14:54:29 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "stdio.h"
//#include "ft_strlen.c"

int	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	size_t	i;
	char	*punt;

	i = 0;
	punt = malloc(sizeof(s) * (ft_strlen2(s) + 1));
	if (!punt)
		return (((void *)0));
	while (s[i])
	{
		punt[i] = (*f)(i, s[i]);
		i++;
	}
	punt[i] = '\0';
	return (punt);
}
/*
char	ft_a(unsigned int i, char c)
{
	if (c == 'a' && i != 5)
	{
		return ('A');
	}
	return ('x');
}

int	main ()
{
	printf("%s", ft_strmapi("aaaaaaa", &ft_a));
	printf("\n");
	return 0;
}*/