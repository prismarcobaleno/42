/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:58:51 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:37:15 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	unsigned int	i;
	char			*fonte;
	char			*destino;

	fonte = (char *)src;
	destino = (char *)dest;
	i = 0;
	while ((fonte[i] != '\0') && (i < n))
	{
		destino[i] = fonte[i];
		i++;
	}
	return (dest);
}
