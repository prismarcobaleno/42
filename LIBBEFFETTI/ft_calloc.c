/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:17:10 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/12 18:30:19 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(unsigned long memb, unsigned long quant)
{
	void	*punt;

	punt = (void *)malloc(memb * quant);
	if (!punt)
		return (((void *)0));
	ft_bzero(punt, (memb * quant));
	return (punt);
}
