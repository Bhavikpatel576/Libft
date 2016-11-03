/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:04:48 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/02 14:34:05 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test putstring file that will be replaced when the header file is created


#include <string.h>
#include <unistd.h>
#include "libft.h"

//void ft_putchar(char c)
//{
//	write(1,&c,1);
//}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	
}

//int main(void)
//{
//	char *word;
//	word = "testthefunction";
//
//	ft_putstr(word);
//}

