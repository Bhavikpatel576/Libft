/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:12:08 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 22:20:40 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// functions copy the string src to dst which includes a null terminator. Copies at most the src to the dest, 
// but in the instence where src > dst, the remaining characters are filled with '\0'. 
// sudo - check to see if src is larger than dst if so than return, else return null character or a pointer to dst[n]
//  

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dst, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';	
	return (dst);
}

