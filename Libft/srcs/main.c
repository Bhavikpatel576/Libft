/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:28:29 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 02:55:56 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	//char word[7] = "dubious";
	char *word;
	word = "fuckyou";
	
	ft_putnbr(3454);
	ft_putchar('\n');
	ft_putchar('t');
	ft_putchar('\n');
	ft_putstr(word);
	ft_putchar('\n');
	printf("%d\n", ft_strlen(word));
}

