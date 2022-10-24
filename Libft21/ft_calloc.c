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
	size_t		i;
	void		*p;

	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
// int main()
// {
// 	int *p = ft_calloc(5,sizeof(int));
	
// 	int i = 0;
// 	while (i < 7)
// 	{
// 		printf("%d",p[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	int *c = calloc(5,sizeof(int));
// 	int j = 0;
// 	while (j < 7)
// 	{
// 		printf("%d",c[j]);
// 		j++;
// 	}
	
// }
