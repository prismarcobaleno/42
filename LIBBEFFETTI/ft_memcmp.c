/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 14:37:32 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/20 14:38:02 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
// printf
//#include <string.h>
// per la prova

int	ft_memcmp(const void *str1, const void *str2, unsigned long n)
{
	unsigned long	i;
	int				conta;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	conta = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			conta = s1[i] - s2[i];
			return (conta);
		}
		i++;
	}
	return (0);
}
/*int	main(int argc, char *argv[])
{
	int	num = 0;

	printf("\t{%s}, {%s}\n", argv[1], argv[2]);
	if (argc > 2)
	{	
		printf("\tDammi un numero:\n");
		scanf("%d", &num);
		printf("\tmia:\t%d\n", ft_memcmp(argv[1], argv[2], num));
		printf("\tvera:\t%d\n", memcmp(argv[1], argv[2], num));
	}
	else
	{
		printf("\tDammi 2 argomenti!\n");
		printf("\tmia:\t%d\n", ft_memcmp("aaaa", "aaau", 3));
		printf("\tvera:\t%d\n", memcmp("aaaa", "aaau", 3));
	}
}*/
