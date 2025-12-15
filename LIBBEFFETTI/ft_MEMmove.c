/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:00:58 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:08:03 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
/*
int		main(void)
{
	printf("%p",ft_memmove("miarcobaleno", "00a", 4));
}*/