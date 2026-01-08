/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:38:23 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/08 14:56:24 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
//TOGLI
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*punt;
	unsigned long	i;
	unsigned long	j;

	punt = malloc(strlun(s1) + strlun(s2) + 1);
	if (!punt)
		return (((void *)0));
	i = 0;
	while (s1[i])
	{
		punt[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		punt[i] = s2[j];
		j++;
		i++;
	}
	punt[i + 1] = '\0';
	return (punt);
}
