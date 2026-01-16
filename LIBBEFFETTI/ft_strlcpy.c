/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:56:47 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:57:04 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *fon, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (fon[i] && (i < (size - 1)))
		{
			dst[i] = fon[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (fon[i])
		i++;
	return (i);
}
