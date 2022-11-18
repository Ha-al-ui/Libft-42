/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:59 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/17 22:35:56 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	len = 0;
	if ((ft_strlen(s + start)) < len)
	len = ft_strlen(s + start);
	i = 0;
	ns = (char *)malloc(sizeof (char) * (len + 1));
	if (ns != NULL)
	{
		while (i < len)
		{
			ns[i] = s[start + i];
			i++;
		}
		ns[i] = '\0';
		return (ns);
	}
	return (0);
}
// int main()
// {
//     printf("%s",ft_substr("adhidush", 3, 3));
// }
