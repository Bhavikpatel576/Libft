/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:33:35 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 03:01:14 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

#ifndef _LIBFT_H_
#define _LIBFT_H_

int ft_strlen(char *str);
//char *ft_strdup(char *string);
//char ft_strcpy(char *src, char *dst);
//char ft_strncpy(char *src, char *dst);
//char *ft_strstr(char *haystack, char *needle);
//char *ft_strnstr(char *haystack, char *needle, size_t len);
//int strcmp(char *s1, char *s2);
//int strncmp(char *s1, char *s2);
//void ft_atoi(char *str);
void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);
//int ft_itoa(int num_to_string);

#endif
