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

#include "libft.h"

static int	se_fuori_ul(size_t a, size_t b)
{
	if (b == 0)
		return (0);
	else if (a > 18446744073709551615UL / b)
		return (1);
	return (0);
}

static void	azzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t memb, size_t quant)
{
	void	*punt;

	if (se_fuori_ul(memb, quant))
		return (((void *)0));
	punt = malloc(memb * quant);
	if (!punt)
		return (((void *)0));
	azzero(punt, (memb * quant));
	return (punt);
}
/*int	main ()
{
	printf("%p", ft_calloc(-5, -5));
	printf("miao(((((\n");
	return 0;
}*/
