/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:56:47 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 15:35:16 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *fon, unsigned long size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	lun_d;
	unsigned long	lun_f;


	lun_f = ft_strlen(fon);
	lun_d = ft_strlen(dst);
	i = 0;
	j = lun_d;
	if ((lun_d < size - 1) && (size > 0))
	{
		while (fon[i] && (lun_d + i < size - 1))
		{
			dst[j] = fon[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (lun_d >= size)
		return (size + lun_f);
	return (lun_d + lun_f);
}
