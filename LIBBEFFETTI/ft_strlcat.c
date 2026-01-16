/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:56:47 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 15:35:16 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *fon, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lun_d;
	size_t	lun_f;

	lun_f = ft_strlen(fon);
	lun_d = ft_strlen(dst);
	i = 0;
	j = lun_d;
	if ((lun_d < size - 1) && (size > 0))
	{
		while (fon[i] && (lun_d + i < size - 1))
		{
			dst[j] = fon[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (lun_d >= size)
		return (size + lun_f);
	return (lun_d + lun_f);
}
/*int main()
{
	char s1[] = "AAAAAAAAA";
	char s2[30] = "BBBB";
	char s3[] = "AAAAAAAAA";
	char s4[30] = "BBBB";
	int x;
	int y;
	
	x = strlcat(s2, s1, 25);
	printf("%d\n", x);
	printf("%s\n", s2);
	y = ft_strlcat(s4, s3, 25);
	printf("%d\n", y);
	printf("%s\n", s4);
}*/