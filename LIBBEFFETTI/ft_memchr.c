/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:46:59 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/20 14:47:00 by rosmessi         ###   ########.fr       */
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

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	cara;
	unsigned char	*str;
	unsigned long	i;
	unsigned char	*fine;

	cara = c;
	i = 0;
	str = (unsigned char *) s;
	if (n == 0)
		return (NULL);
	if (c == '\0')
	{
		fine = str + contastringa(s);
		return (fine);
	}
	while (i++ < n && str[i] != '\0')
	{
		if (str[i] == cara)
		{
			return (&str[i]);
		}
	}
	return ((void *)0);
}
/*int	main()
{
	printf("miao %s\n", (unsigned char	*) ft_memchr("marcobaleno", 'a', 5555));
	return(0);

}*/
