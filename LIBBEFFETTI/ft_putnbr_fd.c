/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:02:49 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/15 15:11:44 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_ass(int nmr)
{
	if (nmr < 0)
		return (-nmr);
	else
		return (nmr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		nega;
	int		i;

	if (n < 0)
		nega = 1;
	else
		nega = 0;
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + ft_ass(n % 10);
		n = (n / 10);
	}
	if (nega)
		str[i] = '-';
	else if (i > 0)
		i--;
	while (i >= 0)
		write(fd, &str[i--], 1);
}
