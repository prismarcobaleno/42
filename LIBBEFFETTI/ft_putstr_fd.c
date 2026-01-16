/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:32:12 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/23 17:32:22 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static unsigned int	strlun(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, strlun(s));
}
/*int		main()
{
	ft_putstr_fd("sdgfjhgjga", 1);
}*/
