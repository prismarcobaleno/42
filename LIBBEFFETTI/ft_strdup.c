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

char	*ft_strdup(const char *s)
{
	char			*punt;
	unsigned long	i;

	i = ft_strlen(s);
	punt = (void *)malloc(i);
	if (!punt)
		return (((void *)0));
	else
	{
		while (s[i++])
			punt[i] = s[i];
	}
	return (punt);
}
