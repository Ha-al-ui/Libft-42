/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:45 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/13 17:02:34 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*p;

	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
// int main()
// {
// 	char *p = ft_calloc(5,5);
// 	int i;
// 	i = 0;
// 	while(i < 5)
// 	{
// 		printf("%d\n",p[i]);
// 		i++;
// 	}
// }