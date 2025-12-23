/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:05:03 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/22 17:05:11 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	str[1];

	str[0] = c;
	write(fd, str, 1);
}
/*
int		main()
{
	ft_putchar_fd('a', 1);
}*/