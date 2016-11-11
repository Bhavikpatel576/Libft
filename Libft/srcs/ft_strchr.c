/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:49:06 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/09 13:50:02 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates FIRST occurance of character pointed to by s (also includes '\0')
// returns a pointer to the located character

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char character;
	char *string;

	string = (char *)s;
	character = (char)c;

	while(*string++ != '\0')
	{
		if(*string == character)
			return(string);
	}
	if(*string == '\0')
		return (0);
	return(string);
}
