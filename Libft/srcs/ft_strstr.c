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
//function will look for little in big and once there is a match, the remaining string will be returned. If no little, big is returned. However if there is a little and it doesn't appear in big, null is returned. 

//Sudo: Check to see if little is there. Create a loop that moves the big string to match the first string of little. 
//If match, both strings index will start to increment. If little hits null pointer, return the starting point of the index where big matched little. 

#include "libft.h"


char *ft_strstr(char *big, char *little)
{
	int i;
	int j;
	int k;
	
	i = 0;
	if (!little)
		return big; //apparently have to return (char*)big 
	while (big[i] != '\0')
	{
	j = 0;
	k = i;
		if (big[k] == little[j])
		{
			if (little[j] == '\0')
		return 0; //->>> char *(big[i]);
		i++;
		j++;
		}
		i++;
	}
	return NULL;
}
