/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:47:25 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/16 19:06:31 by rosmessi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strrchr(const char *s, int cara)
{
	int		i;
	char	c;

	c = (char) cara;
	i = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i--] == c)
			return ((char *)(s + i));
	}
	if (s[i] == c)
		return ((char *)(s + ft_strlen(s) + 1));
	return (NULL);
}
