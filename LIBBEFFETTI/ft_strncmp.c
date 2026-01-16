/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:00:51 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:37:25 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	conta;

	i = 0;
	conta = 0;
	while (conta == 0 && n-- > 0)
	{
		if (s1[i] > s2[i])
		{
			conta = s1[i] - s2[i];
		}
		else if (s1[i] < s2[i])
		{
			conta = -(s2[i] - s1[i]);
		}
		if (s1[i] == '\0')
		{
			return (conta);
		}
		i++;
	}
	return (conta);
}
