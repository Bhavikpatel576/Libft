/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:22:18 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/10 00:53:32 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *s1, const char *s2, size_t size)
{
	
	char *string_one;
	char *string_two;
	string_one = (char *)s1;
	string_two = (char *)s2;
	
	size_t dest;
	size_t i;
	size_t space_left;

	i = 0;
	while (*s1++ > 0 && dest < size)
	{
		dest++;
	}
	space_left = size - dest;

	if (space_left == 0)
		return(dest + ft_strlen(s2))

	while(*string_two != '\0')
	{
		if (space_left != '\0')
		{
			*string_one++ = *string_two;
			space_left--;
		}
		
		string_two++;
	}
	*string_one = '\0';
	return(dest + (string_two - string_one));
}

