/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:58:19 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:41:27 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned long int n)
{
	char			*p;
	unsigned int	i;

	p = (char *)str;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (str);
}
