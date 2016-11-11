/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:20:41 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/10 17:25:45 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	neg_value(int n)
{
	int		test_value;
	int		return_value;

	test_value = 0;
	return_value = 0;
	if (n < 0)
	{
		test_value = 1;
	}
	return (test_value);
}

static	int	num_len(int n)
{
	int		len;
	int		rem;

	if (n > 9)
	{
		len = 1;
		rem = n / 10;
		while (rem > 0)
		{
			rem = rem / 10;
			len++;
		}
	}
	else
		len = 1;
	return (len);
}

char		*ft_itoa(int n)
{
	int		i;
	int		rem;
	char	*string;

	if (neg_value(n))
	{
		ft_putchar('-');
		n = -n;
	}
	string = (char *)malloc(sizeof(char) * (num_len(n) + 1));
	i = 0;
	if (n == 0)
	{
		string[i] = '\0';
		return (string);
	}
	while (n != 0)
	{
		rem = n % 10;
		string[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		n = n / 10;
	}
	string[i] = '\0';
	ft_reverse(string, ft_strlen(string));
	return (string);
}
