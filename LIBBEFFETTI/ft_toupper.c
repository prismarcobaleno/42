/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:57:51 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:37:30 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//serve per la prossima
int	ft_se_minuscola(int s)
{
	if (!(s >= 'a' && s <= 'z'))
		return (0);
	else
		return (1);
}

int	ft_toupper(int c)
{
	if (ft_se_minuscola(c) == 1)
		c = c - 32;
	return (c);
}
