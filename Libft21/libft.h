/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:20:30 by halaoui           #+#    #+#             */
/*   Updated: 2022/10/11 20:47:44 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>

int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t len);
int ft_atoi(const char *str);
char *ft_strchr(const char *s, int c);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
#endif
