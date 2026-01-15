/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:58:04 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:37:28 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//serve per la prossima
int	ft_se_maiuscola(int s)
{
	if (!(s >= 'A' && s <= 'Z'))
		return (0);
	else
		return (1);
}

int	ft_tolower(int c)
{
	if (ft_se_maiuscola(c) == 1)
		c = c + 32;
	return (c);
}
