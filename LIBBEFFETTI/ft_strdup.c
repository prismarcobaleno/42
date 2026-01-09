/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:34:04 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/15 14:11:34 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	strlun(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char			*punt;
	unsigned long	i;

	if (!s)
		return (((void *)0));
	punt = (char *)malloc(sizeof(*s) * (strlun(s) + 1));
	if (!punt)
		return (((void *)0));
	i = 0;
	while (s[i])
	{
		punt[i] = s[i];
		i++;
	}
	punt[i] = '\0';
	return (punt);
}
/*int		main()
{
	printf("%s \n ", ft_strdup("sdgfjhgjga"));
}*/