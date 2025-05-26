/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:12:06 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/20 18:12:07 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
void		*ptr;
	int			val;
	unsigned int	uval;
	int			his_ret;
	int			mine_ret;

	printf("test 1: %%d with 42\n");
	his_ret = printf("1-his:  |%d|\n", 42);
	mine_ret = ft_printf("1-mine: |%d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 2: %%d with -42\n");
	his_ret = printf("2-his:  |%d|\n", -42);
	mine_ret = ft_printf("2-mine: |%d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 3: %%+d with 42\n");
	his_ret = printf("3-his:  |%+d|\n", 42);
	mine_ret = ft_printf("3-mine: |%+d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 4: %%+d with -42\n");
	his_ret = printf("4-his:  |%+d|\n", -42);
	mine_ret = ft_printf("4-mine: |%+d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 5: %% d with 42\n");
	his_ret = printf("5-his:  |% d|\n", 42);
	mine_ret = ft_printf("5-mine: |% d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 6: %% d with -42\n");
	his_ret = printf("6-his:  |% d|\n", -42);
	mine_ret = ft_printf("6-mine: |% d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 7: %%0d with 42\n");
	his_ret = printf("7-his:  |%0d|\n", 42);
	mine_ret = ft_printf("7-mine: |%0d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 8: %%0d with -42\n");
	his_ret = printf("8-his:  |%0d|\n", -42);
	mine_ret = ft_printf("8-mine: |%0d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 9: %%-d with 42\n");
	his_ret = printf("9-his:  |%-d|\n", 42);
	mine_ret = ft_printf("9-mine: |%-d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 10: %%-d with -42\n");
	his_ret = printf("10-his: |%-d|\n", -42);
	mine_ret = ft_printf("10-mine:|%-d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 11: %%.3d with 42\n");
	his_ret = printf("11-his: |%.3d|\n", 42);
	mine_ret = ft_printf("11-mine:|%.3d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 12: %%.3d with -42\n");
	his_ret = printf("12-his: |%.3d|\n", -42);
	mine_ret = ft_printf("12-mine:|%.3d|\n", -42);
	printf("\n\n");
	printf("\n\nhis_ret: %d\n\n", his_ret);
	printf("\n\nmine_ret: %d\n\n", mine_ret);
	assert(his_ret == mine_ret);

	printf("test 13: %%+5d with 42\n");
	his_ret = printf("13-his: |%+5d|\n", 42);
	mine_ret = ft_printf("13-mine:|%+5d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 14: %%+5d with -42\n");
	his_ret = printf("14-his: |%+5d|\n", -42);
	mine_ret = ft_printf("14-mine:|%+5d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 15: %%+05d with 42\n");
	his_ret = printf("15-his: |%+05d|\n", 42);
	mine_ret = ft_printf("15-mine:|%+05d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 16: %%+05d with -42\n");
	his_ret = printf("16-his: |%+05d|\n", -42);
	mine_ret = ft_printf("16-mine:|%+05d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 17: %%+5.3d with 42\n");
	his_ret = printf("17-his: |%+5.3d|\n", 42);
	mine_ret = ft_printf("17-mine:|%+5.3d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 18: %%+5.3d with -42\n");
	his_ret = printf("18-his: |%+5.3d|\n", -42);
	mine_ret = ft_printf("18-mine:|%+5.3d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 19: %%-+5.3d with 42\n");
	his_ret = printf("19-his: |%-+5.3d|\n", 42);
	mine_ret = ft_printf("19-mine:|%-+5.3d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 20: %%-+5.3d with -42\n");
	his_ret = printf("20-his: |%-+5.3d|\n", -42);
	mine_ret = ft_printf("20-mine:|%-+5.3d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 21: %% 05d with 42\n");
	his_ret = printf("21-his: |% 05d|\n", 42);
	mine_ret = ft_printf("21-mine:|% 05d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 22: %% 05d with -42\n");
	his_ret = printf("22-his: |% 05d|\n", -42);
	mine_ret = ft_printf("22-mine:|% 05d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 23: %% .3d with 42\n");
	his_ret = printf("23-his: |% .3d|\n", 42);
	mine_ret = ft_printf("23-mine:|% .3d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 24: %% .3d with -42\n");
	his_ret = printf("24-his: |% .3d|\n", -42);
	mine_ret = ft_printf("24-mine:|% .3d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 25: %% 5d with 42\n");
	his_ret = printf("25-his: |% 5d|\n", 42);
	mine_ret = ft_printf("25-mine:|% 5d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 26: %% 5d with -42\n");
	his_ret = printf("26-his: |% 5d|\n", -42);
	mine_ret = ft_printf("26-mine:|% 5d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 27: %%+010.5d with 42\n");
	his_ret = printf("27-his: |%+010.5d|\n", 42);
	mine_ret = ft_printf("27-mine:|%+010.5d|\n", 42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 28: %%+010.5d with -42\n");
	his_ret = printf("28-his: |%+010.5d|\n", -42);
	mine_ret = ft_printf("28-mine:|%+010.5d|\n", -42);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 29: %%#d, 42\n");
	mine_ret = ft_printf("%#d\n", 42);
	// There's no direct standard output to compare with for %#d without implementation details.
	// We'll skip the assert for this one, as the behavior of %#d for integers is not standard.
	(void)mine_ret;

	/* POINTER SHENANIGANS                      */
	ptr = malloc(20);

	printf("test 30: %%30p\n");
	his_ret = printf("30-his: |%30p|\n", ptr);
	mine_ret = ft_printf("30-mine:|%30p|\n", ptr);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 31: %%-30p\n");
	his_ret = printf("31-his: |%-30p|\n", ptr);
	mine_ret = ft_printf("31-mine:|%-30p|\n", ptr);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 32: %% p\n");
	mine_ret = ft_printf("32-mine:|% p|\n", ptr);
	// The behavior of the space flag with %p is undefined, so we skip the assert.
	(void)mine_ret;

	printf("test 32.1: %%p with NULL\n");
	his_ret = printf("32.1-his: %p\n", NULL);
	mine_ret = ft_printf("32.1-mine:%p\n", NULL);
	assert(his_ret == mine_ret);
	free(ptr);


	/* X gonna give it to you                  */
	val = 420;

	printf("test 33: %%x with value 420\n");
	his_ret = printf("33-his:  |%x|\n", val);
	mine_ret = ft_printf("33-mine: |%x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 34: %%#x with 420\n");
	his_ret = printf("34-his:  |%#x|\n", val);
	mine_ret = ft_printf("34-mine: |%#x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 35: %%#X with 420\n");
	his_ret = printf("35-his:  |%#X|\n", val);
	mine_ret = ft_printf("35-mine: |%#X|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 36: %%#8x with 420\n");
	his_ret = printf("36-his:  |%#8x|\n", val);
	mine_ret = ft_printf("36-mine: |%#8x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 37: %%#08x with 420\n");
	his_ret = printf("37-his:  |%#08x|\n", val);
	mine_ret = ft_printf("37-mine: |%#08x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 38: %%-#8x with 420\n");
	his_ret = printf("38-his:  |%-#8x|\n", val);
	mine_ret = ft_printf("38-mine: |%-#8x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 39: %%#08X with 420\n");
	his_ret = printf("39-his:  |%#08X|\n", val);
	mine_ret = ft_printf("39-mine: |%#08X|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 40: %%#8.4x with 420\n");
	his_ret = printf("40-his:  |%#8.4x|\n", val);
	mine_ret = ft_printf("40-mine: |%#8.4x|\n", val);
	printf("\n\n");
	assert(his_ret == mine_ret);

	printf("test 41: %%#-8.4x with 420\n");
	his_ret = printf("41-his:  |%-#8.4x|\n", val);
	mine_ret = ft_printf("41-mine: |%-#8.4x|\n", val);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 42: %%+x with 420 (undefined/ignored)\n");
//	his_ret = printf("42-his:  |%+x|\n", val);
	mine_ret = ft_printf("42-mine: |%+x|\n", val);
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 43: %% x with 420 (undefined/ignored)\n");
//	his_ret = printf("43-his:  |% x|\n", val);
	mine_ret = ft_printf("43-mine: |% x|\n", val);
//	assert(his_ret == mine_ret);
	printf("\n\n");

	/* I have no sign */
	uval = 4294967295; //UINT_MAX

	printf("test 44: %%u with 42\n");
	his_ret = printf("44-his:  |%u|\n", 42);
	mine_ret = ft_printf("44-mine: |%u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 45: %%u with 0\n");
	his_ret = printf("45-his:  |%u|\n", 0);
	mine_ret = ft_printf("45-mine: |%u|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 46: %%u with UINT_MAX\n");
	his_ret = printf("46-his:  |%u|\n", uval);
	mine_ret = ft_printf("46-mine: |%u|\n", uval);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 47: %%5u with 42\n");
	his_ret = printf("47-his:  |%5u|\n", 42);
	mine_ret = ft_printf("47-mine: |%5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 48: %%-5u with 42\n");
	his_ret = printf("48-his:  |%-5u|\n", 42);
	mine_ret = ft_printf("48-mine: |%-5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 49: %%05u with 42\n");
	his_ret = printf("49-his:  |%05u|\n", 42);
	mine_ret = ft_printf("49-mine: |%05u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 50: %%.5u with 42\n");
	his_ret = printf("50-his:  |%.5u|\n", 42);
	mine_ret = ft_printf("50-mine: |%.5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 51: %%8.5u with 42\n");
	his_ret = printf("51-his:  |%8.5u|\n", 42);
	mine_ret = ft_printf("51-mine: |%8.5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 52: %%08.5u with 42 (zero flag ignored)\n");
	his_ret = printf("52-his:  |%08.5u|\n", 42);
	mine_ret = ft_printf("52-mine: |%08.5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 53: %%-8.5u with 42\n");
	his_ret = printf("53-his:  |%-8.5u|\n", 42);
	mine_ret = ft_printf("53-mine: |%-8.5u|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 54: %%+u with 42 (undefined/ignored)\n");
//	his_ret = printf("54-his:  |%+u|\n", 42);
	mine_ret = ft_printf("54-mine: |%+u|\n", 42);
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 55: %% u with 42 (undefined/ignored)\n");
//	his_ret = printf("55-his:  |% u|\n", 42);
	mine_ret = ft_printf("55-mine: |% u|\n", 42);
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 56: %%#u with 42 (undefined/ignored)\n");
//	his_ret = printf("56-his:  |%#u|\n", 42);
	mine_ret = ft_printf("56-mine: |%#u|\n", 42);
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 57: %%d without number (undefined/ignored)\n");
//	his_ret = printf("57-his:  |%d|\n");
	mine_ret = ft_printf("57-mine: |%d|\n");
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 58: %%c with 'a'\n");
	his_ret = printf("58-his:  |%c|\n", 'a');
	mine_ret = ft_printf("58-mine: |%c|\n", 'a');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 59: %%5c with 'a'\n");
	his_ret = printf("59-his:  |%5c|\n", 'a');
	mine_ret = ft_printf("59-mine: |%5c|\n", 'a');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 60: %%-5c with 'a'\n");
	his_ret = printf("60-his:  |%-5c|\n", 'a');
	mine_ret = ft_printf("60-mine: |%-5c|\n", 'a');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 61: %%0c with 'a' (undefined/ignored)\n");
//	his_ret = printf("61-his:  |%0c|\n", 'a');
	mine_ret = ft_printf("61-mine: |%0c|\n", 'a');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 62: %%+c with 'a' (undefined/ignored)\n");
//	his_ret = printf("62-his:  |%+c|\n", 'a');
	mine_ret = ft_printf("62-mine: |%+c|\n", 'a');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 63: %%#c with 'a' (undefined/ignored)\n");
//	his_ret = printf("63-his:  |%#c|\n", 'a');
	mine_ret = ft_printf("63-mine: |%#c|\n", 'a');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 64: %% c with 'a' (undefined/ignored)\n");
//	his_ret = printf("64-his:  |% c|\n", 'a');
	mine_ret = ft_printf("64-mine: |% c|\n", 'a');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 65: %%.c with 'a' (undefined/ignored)\n");
	his_ret = printf("65-his:  |%.c|\n", 'a');
	mine_ret = ft_printf("65-mine: |%.c|\n", 'a');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 66: %%5.3c with 'a' (precision ignored)\n");
//	his_ret = printf("66-his:  |%5.3c|\n", 'a');
	mine_ret = ft_printf("66-mine: |%5.3c|\n", 'a');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 67: %%c with null char '\\0'\n");
	his_ret = printf("67-his:  |%c|\n", '\0');
	mine_ret = ft_printf("67-mine: |%c|\n", '\0');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 68: %%5c with '\\0' (null char)\n");
	his_ret = printf("68-his:  |%5c|\n", '\0');
	mine_ret = ft_printf("68-mine: |%5c|\n", '\0');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 69: %%-5c with '\\0' (null char)\n");
	his_ret = printf("69-his:  |%-5c|\n", '\0');
	mine_ret = ft_printf("69-mine: |%-5c|\n", '\0');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 70: %%s with \"hello\"\n");
	his_ret = printf("70-his:  |%s|\n", "hello");
	mine_ret = ft_printf("70-mine: |%s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 71: %%s with empty string\n");
	his_ret = printf("71-his:  |%s|\n", "");
	mine_ret = ft_printf("71-mine: |%s|\n", "");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 72: %%s with NULL\n");
	his_ret = printf("72-his:  |%s|\n", (char *)NULL);
	mine_ret = ft_printf("72-mine: |%s|\n", (char *)NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 73: %%10s with \"hello\"\n");
	his_ret = printf("73-his:  |%10s|\n", "hello");
	mine_ret = ft_printf("73-mine: |%10s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 74: %%-10s with \"hello\"\n");
	his_ret = printf("74-his:  |%-10s|\n", "hello");
	mine_ret = ft_printf("74-mine: |%-10s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 75: %%.3s with \"hello\"\n");
	his_ret = printf("75-his:  |%.3s|\n", "hello");
	mine_ret = ft_printf("75-mine: |%.3s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 76: %%10.3s with \"hello\"\n");
	his_ret = printf("76-his:  |%10.3s|\n", "hello");
	mine_ret = ft_printf("76-mine: |%10.3s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 77: %%-10.3s with \"hello\"\n");
	his_ret = printf("77-his:  |%-10.3s|\n", "hello");
	mine_ret = ft_printf("77-mine: |%-10.3s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 78: %%3.10s with \"hello\"\n");
	his_ret = printf("78-his:  |%3.10s|\n", "hello");
	mine_ret = ft_printf("78-mine: |%3.10s|\n", "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 79: %%s with long string\n");
	his_ret = printf("79-his:  |%s|\n", "Lorem ipsum dolor sit amet");
	mine_ret = ft_printf("79-mine: |%s|\n", "Lorem ipsum dolor sit amet");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 80: %%s with multiple args\n");
	his_ret = printf("80-his:  |%s|%s|%s|\n", "one", "two", "three");
	mine_ret = ft_printf("80-mine: |%s|%s|%s|\n", "one", "two", "three");
	assert(his_ret == mine_ret);
	printf("\n\n");

	ft_printf("%d d%", 42);  
	printf("%d d%", 42);
	return (0);
}
