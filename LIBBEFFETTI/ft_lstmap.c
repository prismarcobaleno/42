/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosmessi <rosmessi@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:10:48 by rosmessi          #+#    #+#             */
/*   Updated: 2026/01/14 18:26:02 by rosmessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listaf;
	t_list	*funzionato;

	if (!lst || !f || !del)
		return (NULL);
	listaf = NULL;
	while (lst)
	{
		funzionato = ft_lstnew(f(lst->content));
		if (!funzionato)
		{
			ft_lstclear(&listaf, del);
			return (NULL);
		}
		ft_lstadd_back(&listaf, funzionato);
		lst = lst->next;
	}
	return (listaf);
}
