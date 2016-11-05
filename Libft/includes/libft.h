/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:33:35 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 23:34:28 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef _LIBFT_H_
#define _LIBFT_H_

int ft_strlen(char *str);
char *ft_strdup(char *s1);
char *ft_strcpy(char *dst, char *src);
char *ft_strncpy(char *dst, char *src, size_t len);
char *ft_strstr(char *big, char *little);
//char *ft_strnstr(char *haystack, char *needle, size_t len);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);
//int ft_itoa(int num_to_string);

#endif
