/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:42:38 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/27 22:38:50 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char	c;
	int	ft_printf_size;
	int	printf_size;
	char	*pointer;
	int	x;

	
	c = 'c';
	x = -50;
	ft_printf_size = ft_printf("A %c\n", c);
	printf_size = printf("A %c\n", c);
	printf_size == ft_printf_size ? printf("char:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	ft_printf_size = ft_printf("A %c\n", x);
	printf_size = printf("A %c\n", x);
	printf_size == ft_printf_size ? printf("char:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);

	pointer = NULL;
	ft_printf_size = ft_printf("%s", "jasdajsdan\n");
	printf_size = printf("%s", "jasdajsdan\n");
	printf_size == ft_printf_size ? printf("str:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	ft_printf_size = ft_printf("%s", pointer);
	printf_size = printf("%s", pointer);
	printf_size == ft_printf_size ? printf("str:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);


	printf_size = printf("%p\n", pointer);
	ft_printf_size = ft_printf("%p\n", pointer);
	printf_size == ft_printf_size ? printf("ptr:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	pointer = malloc(50);
	*(pointer + 49) = '\0';
	printf_size = 0;
	while (printf_size < 49)
		*(pointer + printf_size++) = c;
	ft_printf_size = ft_printf("%p\n", pointer);
	printf_size = printf("%p\n", pointer);
	printf_size == ft_printf_size ? printf("ptr:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	free(pointer);

	x = 42;
	ft_printf_size = ft_printf("%d", x);
	printf_size = printf("%d", x);
	printf_size == ft_printf_size ? printf("d:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	x = -42;
	ft_printf_size = ft_printf("%d", x);
	printf_size = printf("%d", x);
	printf_size == ft_printf_size ? printf("d:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	x = 0;
	ft_printf_size = ft_printf("\n\t%d", x);
	printf_size = printf("\n\t%d", x);
	printf_size == ft_printf_size ? printf("d:\tSUCCESS!!!\n") : printf("my: %d printf: %d\n\n", ft_printf_size, printf_size);
	x = INT_MIN;
	ft_printf_size = ft_printf("\n\t%d", x);
	printf_size = printf("\n\t%d", x);
	printf_size == ft_printf_size ? printf("d:\tSUCCESS!!!\n") : printf("my: %d printf: %d\n\n", ft_printf_size, printf_size);

	x = 42;
	ft_printf_size = ft_printf("%i", x);
	printf_size = printf("%i", x);
	printf_size == ft_printf_size ? printf("i:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);


	printf("\n\n\n\nWELCOME TO HELL\n\n\n\n\n");
	x = 42;
	ft_printf_size = ft_printf("%x", x);
	printf_size = printf("%x", x);
	printf_size == ft_printf_size ? printf("\n|here|\nx:\tSUCCESS!!!\n\n\n\n\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	x = -42;
	ft_printf_size = ft_printf("\n\t|%x|\n", x);
	printf_size = printf("\n\t|%x|\n", x);
	printf_size == ft_printf_size ? printf("\n\nx:\tSUCCESS!!!\n\n\n") : printf("my: %d printf: %d\n\n\n", ft_printf_size, printf_size);
	x = INT_MIN;
	ft_printf_size = ft_printf("\n\t|%x|\n", x);
	printf_size = printf("\n\t|%x|\n", x);
	printf_size == ft_printf_size ? printf("\n\nx:\tSUCCESS!!!\n\n\n") : printf("my: %d printf: %d\n\n\n", ft_printf_size, printf_size);
	x = INT_MAX;
	ft_printf_size = ft_printf("\n\t|%x|\n", x);
	printf_size = printf("\n\t|%x|\n", x);
	printf_size == ft_printf_size ? printf("\n\nx:\tSUCCESS!!!\n\n\n") : printf("my: %d printf: %d\n\n\n", ft_printf_size, printf_size);
	x--;
	ft_printf_size = ft_printf("\n\t|%x|\n", x);
	printf_size = printf("\n\t|%x|\n", x);
	printf_size == ft_printf_size ? printf("\n\nx:\tSUCCESS!!!\n\n\n") : printf("my: %d printf: %d\n\n\n", ft_printf_size, printf_size);

	x = 42;
	ft_printf_size = ft_printf("%X", x);
	printf_size = printf("%X", x);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);

	ft_printf_size = ft_printf("%%");
	printf_size = printf("%%");
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);


	printf("\n\n\n\n\n\n WEIRD STUFF \n\n\n\n\n\n\n");
	ft_printf_size = ft_printf("%k");
	printf("%d\n", ft_printf_size);
	ft_printf_size = ft_printf("%%%");
	printf("%d\n", ft_printf_size);
	ft_printf(NULL);

	
	printf("\n\n\n\n#\n\n\n\n\n");
	ft_printf_size = ft_printf("%#x", 42);
	printf("\n last one os mine next is C's \n");
	printf_size = printf("%#x", 42);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);
	
	ft_printf_size = ft_printf("%#X", 42, 42);
	printf("\n last one os mine next is C's \n");
	printf_size = printf("%#X", 42);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);

	ft_printf("%#g");

	printf("\n\n\n\n+\n\n\n\n\n");
	ft_printf_size = ft_printf("%+d", 42);
	printf("\n last one os mine next is C's \n");
	printf_size = printf("%+d", 42);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);

	ft_printf_size = ft_printf("%+i", 42);
	printf("\n last one os mine next is C's \n");
	printf_size = printf("%+i", 42);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);



	printf("\n\n\n\nu\n\n\n\n\n");
	printf("meu u:\n");
	ft_printf_size = ft_printf("%u", -42);
	printf("\n\nteu u:\n");
	printf_size = printf("%u", -42);
	printf_size == ft_printf_size ? printf("x:\tSUCCESS!!!\n") : printf("my: %d printf: %d", ft_printf_size, printf_size);


	return (0);
}
