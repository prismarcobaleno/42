/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:58:23 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/15 14:09:31 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *libro, const char *parola, size_t lun)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!libro || !parola)
		return (NULL);
	if (!parola[0])
		return ((char *)libro);
	while (libro[i] && (i < lun))
	{
		j = 0;
		while (libro[i + j] && parola[j]
			&& i + j < lun && libro[i + j] == parola[j])
			j++;
		if (parola[j] == '\0')
			return ((char *)(libro + i));
		i++;
	}
	return (NULL);
}
