/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:24:42 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/10 00:52:10 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*string;
	char	character;
	int		string_len;

	string = (char *)s;
	character = (char)c;
	string_len = ft_strlen(string);
	string = string + string_len - 1;
	while (string_len > 0)
	{
		if (*string == character)
		{
			return (string);
		}
		*string--;
	}
	return (string);
}
