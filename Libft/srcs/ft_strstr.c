/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:30:31 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/04 16:50:28 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	int i;
	int j;
	int k;

	i = 0;
	if (!little)
		return (big);
	while (big[i] != '\0')
	{
		j = 0;
		k = i;
		if (big[k] == little[j])
		{
			if (little[j] == '\0')
				return (0);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
