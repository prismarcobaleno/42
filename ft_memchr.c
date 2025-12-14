/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:35:38 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:36:02 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	cara;
	unsigned char	*str;
	unsigned long	i;

	cara = c;
	i = 0;
	str = (unsigned char *) s;
	while (i++ < n && str[i] != '\0')
	{
		if (str[i] == cara)
		{
			return (&str[i]);
		}
	}
	return (NULL);
}
/*
int	main()
{
	printf("miao %s\n", (unsigned char	*) ft_memchr("marcobaleno", 'v', 5555));
	return(0);

}*/
