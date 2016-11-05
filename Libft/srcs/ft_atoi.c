/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:03:31 by bpatel            #+#    #+#             */
/*   Updated: 2016/10/31 14:03:43 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Converts string to integer. So we can pass in the value 5644 as a character and it should convert it to 5644 as an integer.
Function testing: 1. negative sign 2. positive sign 3. floating number ->return num till declimal point 4. alphabet 5. big pos
6. only characters -> return zero 7. special characters like '*', ','

Sudocode:
a string will be passed in and we initially have to account for all whitespaces (move forward if so), handle for negative or 
postive signs, pass through all char values, finally convert the value. 
*/



#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int negative_test;
	int total;


	i = 0;
	total = 0;
	negative_test = 1;
	while (str[i] != '\0' && str[i] == '\t' && str[i] == '\r' && str[i] == '\n' && str[i] == '\v' && str[i] == '\f' && str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
		negative_test = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	return (negative_test * total);
}
