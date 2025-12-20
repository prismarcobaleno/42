/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:35:38 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/17 17:59:49 by rosmessi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	cara;
	unsigned char	*str;
	unsigned long	i;
	unsigned char	*fine;
	
	cara = c;
	i = 0;
	str = (unsigned char *) s;
	if (c == '\0')
	{
		fine = str + ft_strlen(s);
		return(fine);
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
/* //int	main()
{
	printf("miao %s\n", (unsigned char	*) ft_memchr("marcobaleno", 'v', 5555));
	return(0);

}*/
