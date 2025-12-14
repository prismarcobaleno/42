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

void	*ft_memmove1(void *dest, const void *fon, unsigned long int lun)
{
	unsigned long int	i;
	char			*fonte;
	char			*destino;

	fonte = (char *)fon;
	destino = (char *)dest;
	i = lun - 1;
	if (!dest || !fon)
	{
		return (((void *)0));
	}
	if (dest > fon)
	{
		while (i-- >= 0)
			destino[i] = fonte[i];
	}
	else
	{
		i = 0;
		while (i++ < lun)
			destino[i] = fonte[i];
	}
	return (destino);
}
