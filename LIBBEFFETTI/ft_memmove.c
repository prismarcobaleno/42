/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:46:08 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/20 14:46:18 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *fon, unsigned long lun)
{
	char			*destino;
	const char		*fonte;

	destino = (char *)dest;
	fonte = (char *)fon;
	if (destino == fonte)
		return (dest);
	if (destino > fonte)
	{
		fonte = fonte + lun - 1;
		destino = destino + lun - 1;
		while (lun--)
			*destino-- = *fonte--;
	}
	else
	{
		while (lun--)
			*destino++ = *fonte++;
	}
	return (dest);
}
