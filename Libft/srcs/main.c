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

	/*
	//ft_putchar.
	
	//ft_putstr.c
	
	//ft_strlen.c
	
	//ft_putnbr.c
		//ft_putnbr(-2147483648);					
	// 
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
		// char str1[15];
	 //   	char str2[15];
	 //   	int pet;

	 // 	strcpy(str1, "problems");
	 //   	strcpy(str2, "proBLEMS");
	 //   	pet = ft_strncmp(str1,str2,3);
		// printf("Value is : %d/n", pet);

	//ft_memset
		// char str[60] = "Every Programmer needs to know memset";
		// char *b;

		// b = ft_memset(str, '-', 6);
		// printf("%s\n", b);

	//ft_memcpy
		// char src[] = "Testthegotdamnfunction";
		// char dst[100];
		// ft_memcpy(dst, src, ft_strlen(src) +1);
		// printf("Display source %s\n:", src);
		// printf("Display copied string %s\n:", dst);
	//ft_memccpy
		// char src[60] = "Taj Mahal is a historic monument in India";
		// char dst[61];
		// char *pst;
		// //ft_memccpy(dst, src, 'c', ft_strlen(src) +1);
		// printf("%s\n:", dst);
		// pst = memccpy(dst, src, 'c', 42);
		// *pst = '\0';
		// printf("%s\n", pst);

	//ft_memchr()
		// char s[100] = "http://wwww.pornhub.com";
		// char ch = '5';
		// char *ret;
		// ret = ft_memchr(s, ch, strlen(s) + 1);
		// printf("%s\n", ret);  
   
   	//ft_memcmp.c
   		// char s1[] = " couple more to do";
   		// char s2[] = " douple more to do";

   		// printf("Actual function: %d\n", memcmp(s1,s2,strlen(s1)));
   		// printf("Copy function: %d\n", ft_memcmp(s1,s2,ft_strlen(s1)));

	//ft_strcat
		// char src[50], dest[50];

	 //   strcpy(src,  "This is source");
	 //   strcpy(dest, "This is destination");

	 //   ft_strcat(dest, src);

	 //   printf("Final destination string : |%s|", dest);
	   
	 //   return(0);
	
	//ft_strrchr
	   // const char str[] = "http://www.tutorialspoint.com";
	   // const char ch = 't';
	   // char *ret;

	   // ret = strrchr(str, ch);

	   // printf("String after |%c| is - |%s|\n", ch, ret);
	   
	   // return(0);
	
	//ft_isalpha
	   // int var1 = 'd';
	   // int var2 = '2';
	   // int var3 = '\t';
	   // int var4 = ' ';
	    
	   // if( ft_isalpha(var1) )
	   // {
	   //    printf("var1 = |%c| is an alphabet\n", var1 );
	   // }
	   // else
	   // {
	   //    printf("var1 = |%c| is not an alphabet\n", var1 );
	   // }
	   
	   // if( ft_isalpha(var2) )
	   // {
	   //    printf("var2 = |%c| is an alphabet\n", var2 );
	   // }
	   // else
	   // {
	   //    printf("var2 = |%c| is not an alphabet\n", var2 );
	   // }
	   
	   // if( ft_isalpha(var3) )
	   // {
	   //    printf("var3 = |%c| is an alphabet\n", var3 );
	   // }
	   // else
	   // {
	   //    printf("var3 = |%c| is not an alphabet\n", var3 );
	   // }
	   
	   // if( ft_isalpha(var4) )
	   // {
	   //    printf("var4 = |%c| is an alphabet\n", var4 );
	   // }
	   // else
	   // {
	   //    printf("var4 = |%c| is not an alphabet\n", var4 );
	   // }
	   // return(0);

	//int ft_isdigit(int c);
	   // int var1 = 'h';
	   // int var2 = '2';
	    
	   // if( ft_isdigit(var1) )
	   // {
	   //    printf("var1 = |%c| is a digit\n", var1 );
	   // }
	   // else
	   // {
	   //    printf("var1 = |%c| is not a digit\n", var1 );
	   // }
	   
	   // if( ft_isdigit(var2) )
	   // {
	   //    printf("var2 = |%c| is a digit\n", var2 );
	   // }
	   // else
	   // {
	   //    printf("var2 = |%c| is not a digit\n", var2 );
	   // }
	   // return(0);

	//int ft_isalmun(int c);
	   // int var1 = 'h';
	   // int var2 = '2';
	   // int var3 = '&';
	    
	   // if( ft_isalnum(var1) )
	   // {
	   //    printf("var1 = |%c| is a correct digit\n", var1 );
	   // }
	   // else
	   // {
	   //    printf("var1 = |%c| is not a correct digit\n", var1 );
	   // }
	   
	   // if( ft_isalnum(var2) )
	   // {
	   //    printf("var2 = |%c| is a correct digit\n", var2 );
	   // }
	   // else
	   // {
	   //    printf("var2 = |%c| is not a correct digit\n", var2 );
	   // }
	   // if( ft_isalnum(var3) )
	   // {
	   //    printf("var2 = |%c| is a correct digit\n", var2 );
	   // }
	   // else
	   // {
	   //    printf("var2 = |%c| is not a correct digit\n", var2 );
	   // }
	   // return(0);
	//int to_upper
	   // int i = 0;
	   // char str[] = "Tutorials Point";
	   
	   // while(str[i])
	   // {
	   //    ft_putchar_fd(ft_tolower(str[i]),2);
	   //    i++;
	   // }
	   
	   // return(0);
	//ft_strdel
		char string[20] = "trumpisadirtydumb";
		char *ptr1;
		char **ptr2;

		ptr1 = string;
		ptr2 = &ptr1;

		printf("Before function is applied: %p\n", ptr2);
		ft_strdel(ptr2);
		printf("After function is applied: %p\n", ptr2);
*/
	//ft_strequ
		// char string_one[20] = "";
		// char string_two[24] = "  ";
	
		// printf("%d\n", ft_strequ(string_one, string_two));

		// return 0;

	//ft_itoa
		// int n = -64100; 
		// printf("%s\n", ft_itoa(n));
	//ft_striter
		char str[] = "Tutorials Point";
		char ptr;

		printf("%s\n", ft_striter(str, &ft_toupper));


















}
