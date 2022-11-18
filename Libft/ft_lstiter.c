/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 02:15:36 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/17 22:08:25 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void f(void *s)
// {
// 	char *p = s;
// 	int i = 0;
// 	while (p[i])
// 	{
// 		p[i] -= 32;
// 		i++;
// 	}	
// }
// int main()
// {
// 	t_list *node;
// 	node = ft_lstnew(ft_strdup(""));
// 	ft_lstiter(node, &f);
// 	printf("%s", node->content);
// }
