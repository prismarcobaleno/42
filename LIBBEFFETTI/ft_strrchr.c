/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:36:00 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/20 14:36:43 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contastringa(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int cara)
{
	int		i;
	char	c;

	c = (char) cara;
	i = contastringa(s) + 1;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i--] == c)
			return ((char *)(s + i + 1));
	}
	if (s[i] == c)
		return ((char *)(s + contastringa(s) + 1));
	return (NULL);
}
/*int main(void)
{
	printf("%s", ft_strrchr("aJsdfghjklASDFGHJK", '\0'));
}*/
