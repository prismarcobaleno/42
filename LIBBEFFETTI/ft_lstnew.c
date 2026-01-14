/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:35:37 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/14 16:35:47 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nuovo;

	nuovo = (t_list *)malloc(sizeof(*nuovo));
	if (!nuovo)
		return (NULL);
	nuovo->content = content;
	nuovo->next = NULL;
	return (nuovo);
}
