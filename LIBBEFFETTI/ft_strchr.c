/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:30:34 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:40:50 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int cara)
{
	int		i;
	char	c;

	c = (char) cara;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i++] == c)
			return ((char *)(s + i - 1));
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
/*
int		main(void)
{
	printf("%s",ft_strchr("miarcobaleno", 'a'));
}*/
