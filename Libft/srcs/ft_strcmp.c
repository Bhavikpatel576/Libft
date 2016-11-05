/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:51:11 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/04 15:11:20 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//what happens if S1 or S2 are not passed through? 

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while(s1[i] != '\0')
	{
		total = total + (s1[i] - s2[i]);
		i++;
	}
	return total;
}

// int ft_strcmp_piscine(const char *s1, const char *s2)
// {

// 	while(*s1 && (*s1==*s2))
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return(*s1-*s2);
// }