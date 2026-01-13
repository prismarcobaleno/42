/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:43:54 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/13 15:43:59 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include "ft_strlen.c"

static	int	ft_rientra(char c, char const *qui)
{
	unsigned long	i;

	i = 0;
	while (qui[i])
	{
		if (qui[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	long int	i;
	long int	iniz;
	long int	fine;
	char		*stri;

	i = 0;
	iniz = 0;
	while (s1[i++] && ft_rientra(s1[i], set))
		iniz++;
	fine = ft_strlen(s1);
	while (fine > iniz && ft_rientra(s1[fine - 1], set))
		fine--;
	stri = (char *)malloc(sizeof(*s1) * (fine - iniz + 1));
	if (!stri)
		return (NULL);
	i = 0;
	if (iniz != 0)
		iniz++;
	while (iniz < fine)
		stri[i++] = s1[iniz++];
	stri[i] = '\0';
	return (stri);
}

/*
#include <string.h>
#include <stdlib.h>
int	main ()
{	
	printf("%s \n", ft_strtrim("x5x55x5x5xdgfhdhhfhdfhdx", "x5"));
	return (0);
}*/