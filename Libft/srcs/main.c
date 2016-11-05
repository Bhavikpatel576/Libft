/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:28:29 by bpatel            #+#    #+#             */
/*   Updated: 2016/11/03 23:34:22 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	//ft_putchar.
	
	//ft_putstr.c
	
	//ft_strlen.c
	
	//ft_putnbr.c
		//ft_putnbr(-2147483648);					
	
	//ft_strdup
		//char word_test[] = "Fuckthisworld";
		//char *poo;
		//char *copy_to;
		//
		//copy_to = ft_strdup(poo);
		//poo = word_test;
		//printf("%s/n", copy_to);
	
	//ft_strncpy
		// char *source;
		// char *destination;

		// char word_1[] = "Fuckyou";
		// char word_2[] = "Stupid";

		// source = word_1;
		// destination = word_2;

		// ft_strncpy(destination, source, 4);
		
		// printf("%s/n", destination);
	
	//ft_strstr
		// char little;
		// char big;
		// char result;
	
		// little = "distasteful";
		// big = "vlad has a very distasteful aura";

	//ft_atoi
		// char test[] = "asdf	+	6545654";
		// char test2[] = "asdf	-	6545654";

		// printf("Actual function value: %d\n", atoi(test));
		// printf("Actual function value: %d\n", atoi(test2));

		// printf("Step function value: %d\n", ft_atoi(test));
		// printf("Step function value: %d\n", ft_atoi(test2));
		
	//ft_strcmp
	char str1[15];
   	char str2[15];
   	//int ret;
   	int pet;


 	strcpy(str1, "problems");
   	strcpy(str2, "proBLEMS");

   	//ret = strcmp(str1, str2);
   	pet = ft_strncmp(str1,str2,3);

   	// if(ret < 0)
   	// {
    //   	printf("str1 is less than str2");
   	// }	
   	// else if(ret > 0) 
   	// {
    //   	printf("str2 is less than str1");
   	// }
   	// else 
   	// {
    //   	printf("str1 is equal to str2");
   	// }

     printf("Value is : %d/n", pet);
  
   
   	return(0);

	//
	
	//
	
	//510-320*9392
	//
	
	//
	
}

