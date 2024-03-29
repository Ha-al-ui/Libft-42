/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 02:16:13 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/10 02:16:18 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;
	void	*cont;

	if (!lst || !f || !del || !*f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		cont = f(lst->content);
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			if (res)
				ft_lstclear(&res, del);
			return (NULL);
		}
		if (!res)
			res = node;
		else
			ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
