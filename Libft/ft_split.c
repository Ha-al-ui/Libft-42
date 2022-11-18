/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:50:37 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/04 01:34:05 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	car_coun( const char *str, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (*str)
	{
		if (*str == c)
		{
			counter++;
		}
		str++;
		i++;
	}
	return (i - counter);
}

static void	ft_free(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
}

static char	**split_m(const char *s, char c)
{
	char	**p;
	size_t	i;
	size_t	len;

	i = 0;
	p = malloc(sizeof(char *) * (car_coun(s, c) + 1));
	if (!p)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			p[i++] = ft_substr(s - len, 0, len);
			if (!p)
				ft_free(p);
		}
		else
			s++;
	}
	p[i] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char		**p;

	if (!s)
		return (0);
	p = split_m(s, c);
	if (!p)
		return (NULL);
	return (p);
}
// int main()
// {
// 	char *s = "##hgdhd#ghdghgdg #hghjytu###";
// 	char **split = ft_split(s,'g');
// 	int i = 0;
// 	while (split[i])
// 	{
// 		printf("%s\n",split[i]);
// 		i++;
// 	}
// }