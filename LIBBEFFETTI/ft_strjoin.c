/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:38:23 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/23 19:38:57 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static unsigned int	strlun(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	char	*punt;

	punt = malloc(strlun(s1) + strlun(s2));
	if (!punt)
		return (((void *)0));
	return(NULL);
}

// fkjfdjlgdkjk