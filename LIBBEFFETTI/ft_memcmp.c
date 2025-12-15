/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:54:05 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/10 11:57:44 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// printf
// #include <string.h>
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
	while (conta == 0 && n-- > 0)
	{
		if (s1[i] > s2[i])
		{
			conta = s1[i] - s2[i];
		}
		else if (s1[i] < s2[i])
		{
			conta = -(s2[i] - s1[i]);
		}
		if (s1[i] == '\0')
			return (conta);
		i++;
	}
	return (conta);
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
		printf("\tDammi 2 argomenti!\n");
}*/
