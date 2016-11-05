/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:09:47 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/04 16:47:30 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int total;

	i = 0;
	total = 0;
	n = 0;
	while(s1[i] != '\0' && i < n)
	{
		total = total + (s1[i] - s2[i]);
		i++;
	}
	return total;
}
