/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosasofiamessina@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:17:56 by rosmessi          #+#    #+#             */
/*   Updated: 2025/12/04 15:36:50 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, unsigned long int n);
void	ft_bzero(void *s, unsigned long int n);
void	*ft_memcpy(void *dest, const void *src, unsigned long int n); //
void	*ft_memmove(void *dest, const void *src, unsigned long int n); //
/*
memcpy
memmove
? strlcpy
? strlcat
strchr
strrchr
* strncmp
memchr
memcmp
strnstr
* atoi


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

void	ft_bzero(void *s, unsigned long int n)
{
	char			*p;
	unsigned int	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	unsigned int	i;
	char			*fonte;
	char			*destino;

	fonte = (char *)src;
	destino = (char *)dest;
	i = 0;
	while ((fonte[i] != '\0') && (i < n))
	{
		destino[i] = fonte[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned int	i;
	char			*fonte;
	char			*destino;
	char			*tempo;

	i = 0;
	fonte = (char *)src;
	destino = (char *)dest;
	tempo = (char *)malloc(sizeof(char) * n);
	if (tempo == NULL)
	{
		return (NULL);
	}
	else
	{
		while ((fonte[i] != '\0') && (i < n))
		{
			tempo[i] = fonte[i];
			i++;
		}
		i = 0;
		while ((tempo[i] != '\0') && (i < n))
		{
			destino[i] = tempo[i];
			i++;
		}
		free(tempo);
	}
	return (dest);
}
*/