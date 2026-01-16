/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:08:39 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/15 15:08:55 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)((unsigned int) i, &s[i]);
		i++;
	}
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
	char *s = "aaaaaa3aaa";

	ft_striteri(s, &ft_a);
	printf("%s", s);
	printf("\n");
	return 0;
}*/
