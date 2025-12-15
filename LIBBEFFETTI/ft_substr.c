/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:20:56 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/14 14:47:26 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_substr(char const *s, unsigned int inizio, unsigned long len)
{
	unsigned long	i;
	unsigned long	j;
	char			*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i++])
	{
		if (i >= inizio && j < len)
		{
			str[j] = s[i];
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
