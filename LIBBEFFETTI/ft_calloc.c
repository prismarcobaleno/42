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

static int seFuori(unsigned long a, unsigned long b)
{
	unsigned long long alun;
	unsigned long long blun;
	unsigned long long risulta;

	alun = (unsigned long long) a;
	blun = (unsigned long long) b;
	risulta = alun * blun;
	if (risulta > 18446744073709551615ULL)
	{
		return (1);
	}
	else if (risulta < 0)
	{
		return (1);
	}
	return (0);
}

static void	azzero(void *s, unsigned long n)
{
	char			*p;
	unsigned int	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	*ft_calloc(unsigned long memb, unsigned long quant)
{
	void	*punt;

	if (memb < 0 || quant < 0)
		return (NULL);
	if (memb == 18446744073709551615UL || quant == 18446744073709551615UL)
		return (NULL);
	else if (seFuori(memb, quant) == 1)
		return (NULL);
	else if ((memb * quant) < 0)
		return (NULL);
	punt = (void *)malloc(memb * quant);
	if (!punt)
		return (((void *)0));
	azzero(punt, (memb * quant));
	return (punt);
}
/*int	main ()
{
	return 0;
}*/