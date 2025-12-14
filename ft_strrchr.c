/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:47:25 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:57:19 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int cara)
{
	int		i;
	char	c;

	c = (char) cara;
	i = strlen(s) + 1;
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i--] == c)
			return ((char *)(s + i));
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
