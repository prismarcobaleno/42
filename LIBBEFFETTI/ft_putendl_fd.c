/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:34:01 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/07 17:57:11 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, strlun(s));
	write(fd, "\n", 1);
}
/*int		main()
{
	ft_putstr_fd("sdgfjhgjga", 1);
}*/
