/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 01:26:44 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 03:01:10 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//outputs integer value in the standard output
//going to use putchar in order to display value
//will convert character value to int value by using the ascii table
//edge cases need to handle max and min int
//handle negative numbers
//non numbers
//handle multiple digits 


#include "libft.h"

void ft_putnbr(int nb)
{

	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		return;
	}
	else 
	{
		ft_putnbr(nb/10);
	}
	ft_putnbr(nb%10);

}
