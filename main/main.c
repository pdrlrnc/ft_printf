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
#include <limits.h>


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

	printf("test 81: %%x with 42\n");
	his_ret = printf("81-his:  |%x|\n", 42);
	mine_ret = ft_printf("81-mine: |%x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 82: %%X with 42\n");
	his_ret = printf("82-his:  |%X|\n", 42);
	mine_ret = ft_printf("82-mine: |%X|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 83: %%#x with 42\n");
	his_ret = printf("83-his:  |%#x|\n", 42);
	mine_ret = ft_printf("83-mine: |%#x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 84: %%#X with 42\n");
	his_ret = printf("84-his:  |%#X|\n", 42);
	mine_ret = ft_printf("84-mine: |%#X|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 85: %%#x with 0\n");
	his_ret = printf("85-his:  |%#x|\n", 0);
	mine_ret = ft_printf("85-mine: |%#x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 86: %%08x with 42\n");
	his_ret = printf("86-his:  |%08x|\n", 42);
	mine_ret = ft_printf("86-mine: |%08x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 87: %%08X with 42\n");
	his_ret = printf("87-his:  |%08X|\n", 42);
	mine_ret = ft_printf("87-mine: |%08X|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 88: %%-8x with 42\n");
	his_ret = printf("88-his:  |%-8x|\n", 42);
	mine_ret = ft_printf("88-mine: |%-8x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 89: %%8.4x with 42\n");
	his_ret = printf("89-his:  |%8.4x|\n", 42);
	mine_ret = ft_printf("89-mine: |%8.4x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 90: %%-#10x with 255\n");
	his_ret = printf("90-his:  |%-#10x|\n", 255);
	mine_ret = ft_printf("90-mine: |%-#10x|\n", 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 91: %%#.10X with 255\n");
	his_ret = printf("91-his:  |%#.10X|\n", 255);
	mine_ret = ft_printf("91-mine: |%#.10X|\n", 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 92: %%x with INT_MAX\n");
	his_ret = printf("92-his:  |%x|\n", INT_MAX);
	mine_ret = ft_printf("92-mine: |%x|\n", INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 93: %%x with UINT_MAX\n");
	printf("%d\n", UINT_MAX);
	ft_printf("%d\n", UINT_MAX);

	his_ret = printf("93-his:  |%x|\n", UINT_MAX);
	mine_ret = ft_printf("93-mine: |%x|\n", UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 94: %%X with UINT_MAX\n");
	his_ret = printf("94-his:  |%X|\n", UINT_MAX);
	mine_ret = ft_printf("94-mine: |%X|\n", UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 95: %%x with negative (cast to unsigned)\n");
	his_ret = printf("95-his:  |%x|\n", (unsigned int)-1);
	mine_ret = ft_printf("95-mine: |%x|\n", (unsigned int)-1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 96: %%X with multiple args\n");
	his_ret = printf("96-his:  |%X|%X|%X|\n", 1, 255, 4096);
	mine_ret = ft_printf("96-mine: |%X|%X|%X|\n", 1, 255, 4096);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 97: %%#08x with 42\n");
	his_ret = printf("97-his:  |%#08x|\n", 42);
	mine_ret = ft_printf("97-mine: |%#08x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 98: %%-#08X with 42\n");
	//	his_ret = printf("98-his:  |%-#08X|\n", 42);
	mine_ret = ft_printf("98-mine: |%-#08X|\n", 42);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 99: %%10.0x with 0\n");
	his_ret = printf("99-his:  |%10.0x|\n", 0);
	mine_ret = ft_printf("99-mine: |%10.0x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 100: %%#.x with 0\n");
	his_ret = printf("100-his:  |%#.x|\n", 0);
	mine_ret = ft_printf("100-mine: |%#.x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-1: %%x with 0\n");
	his_ret = printf("x-1-his:  |%x|\n", 0);
	mine_ret = ft_printf("x-1-mine: |%x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-2: %%x with 1\n");
	his_ret = printf("x-2-his:  |%x|\n", 1);
	mine_ret = ft_printf("x-2-mine: |%x|\n", 1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-3: %%x with 10\n");
	his_ret = printf("x-3-his:  |%x|\n", 10);
	mine_ret = ft_printf("x-3-mine: |%x|\n", 10);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-4: %%x with 255\n");
	his_ret = printf("x-4-his:  |%x|\n", 255);
	mine_ret = ft_printf("x-4-mine: |%x|\n", 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-5: %%x with 4096\n");
	his_ret = printf("x-5-his:  |%x|\n", 4096);
	mine_ret = ft_printf("x-5-mine: |%x|\n", 4096);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-6: %%x with INT_MAX\n");
	his_ret = printf("x-6-his:  |%x|\n", INT_MAX);
	mine_ret = ft_printf("x-6-mine: |%x|\n", INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-7: %%x with UINT_MAX\n");
	his_ret = printf("x-7-his:  |%x|\n", UINT_MAX);
	mine_ret = ft_printf("x-7-mine: |%x|\n", UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-8: %%x with -1 cast to unsigned\n");
	his_ret = printf("x-8-his:  |%x|\n", (unsigned int)-1);
	mine_ret = ft_printf("x-8-mine: |%x|\n", (unsigned int)-1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-9: %%x with 0xDEADBEEF\n");
	his_ret = printf("x-9-his:  |%x|\n", 0xDEADBEEF);
	mine_ret = ft_printf("x-9-mine: |%x|\n", 0xDEADBEEF);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-10: %%x with 0xBADC0DE\n");
	his_ret = printf("x-10-his:  |%x|\n", 0xBADC0DE);
	mine_ret = ft_printf("x-10-mine: |%x|\n", 0xBADC0DE);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test x-11: %%x with powers of 2\n");
	unsigned int i = 1;
	for (int test = 11; i > 0 && test < 30; i <<= 1, ++test)
	{
		printf("x-%d: %%x with %u\n", test, i);
		his_ret = printf("x-%d-his:  |%x|\n", test, i);
		mine_ret = ft_printf("x-%d-mine: |%x|\n", test, i);
		assert(his_ret == mine_ret);
		printf("\n\n");
	}

	// Now same shit but with %X

	printf("test X-1: %%X with 0\n");
	his_ret = printf("X-1-his:  |%X|\n", 0);
	mine_ret = ft_printf("X-1-mine: |%X|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-2: %%X with 1\n");
	his_ret = printf("X-2-his:  |%X|\n", 1);
	mine_ret = ft_printf("X-2-mine: |%X|\n", 1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-3: %%X with 10\n");
	his_ret = printf("X-3-his:  |%X|\n", 10);
	mine_ret = ft_printf("X-3-mine: |%X|\n", 10);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-4: %%X with 255\n");
	his_ret = printf("X-4-his:  |%X|\n", 255);
	mine_ret = ft_printf("X-4-mine: |%X|\n", 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-5: %%X with 4096\n");
	his_ret = printf("X-5-his:  |%X|\n", 4096);
	mine_ret = ft_printf("X-5-mine: |%X|\n", 4096);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-6: %%X with INT_MAX\n");
	his_ret = printf("X-6-his:  |%X|\n", INT_MAX);
	mine_ret = ft_printf("X-6-mine: |%X|\n", INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-7: %%X with UINT_MAX\n");
	his_ret = printf("X-7-his:  |%X|\n", UINT_MAX);
	mine_ret = ft_printf("X-7-mine: |%X|\n", UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-8: %%X with -1 cast to unsigned\n");
	his_ret = printf("X-8-his:  |%X|\n", (unsigned int)-1);
	mine_ret = ft_printf("X-8-mine: |%X|\n", (unsigned int)-1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-9: %%X with 0xDEADBEEF\n");
	his_ret = printf("X-9-his:  |%X|\n", 0xDEADBEEF);
	mine_ret = ft_printf("X-9-mine: |%X|\n", 0xDEADBEEF);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-10: %%X with 0xBADC0DE\n");
	his_ret = printf("X-10-his:  |%X|\n", 0xBADC0DE);
	mine_ret = ft_printf("X-10-mine: |%X|\n", 0xBADC0DE);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test X-11: %%X with powers of 2\n");
	i = 1;
	for (int test = 11; i > 0 && test < 30; i <<= 1, ++test)
	{
		printf("X-%d: %%X with %u\n", test, i);
		his_ret = printf("X-%d-his:  |%X|\n", test, i);
		mine_ret = ft_printf("X-%d-mine: |%X|\n", test, i);
		assert(his_ret == mine_ret);
		printf("\n\n");
	}

	his_ret = printf("%x\n", INT_MIN);
	mine_ret = printf("%x\n", INT_MIN);
	assert(his_ret == mine_ret);

	printf("\n\n\nHERE COMES MIX!\n\n\n");

	printf("test 200: %%d and %%s combo with INT_MIN and NULL\n");
	//his_ret = printf("200-his:  |%d|%s|\n", INT_MIN, NULL);
	mine_ret = ft_printf("200-mine: |%d|%s|\n", INT_MIN, NULL);
	//assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 201: %%x and %%p combo with 0\n");
	his_ret = printf("201-his:  |%x|%p|\n", 0, NULL);
	mine_ret = ft_printf("201-mine: |%x|%p|\n", 0, NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 202: %%u and %%d with -1 and UINT_MAX\n");
	his_ret = printf("202-his:  |%u|%d|\n", (unsigned int)-1, -1);
	mine_ret = ft_printf("202-mine: |%u|%d|\n", (unsigned int)-1, -1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 203: %%X and %%c with large hex and character\n");
	his_ret = printf("203-his:  |%X|%c|\n", 0xDEADBEEF, 'Z');
	mine_ret = ft_printf("203-mine: |%X|%c|\n", 0xDEADBEEF, 'Z');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 204: %%s and %%s with empty and long string\n");
	his_ret = printf("204-his:  |%s|%s|\n", "", "Lorem ipsum dolor sit amet");
	mine_ret = ft_printf("204-mine: |%s|%s|\n", "", "Lorem ipsum dolor sit amet");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 205: %%#x and %%u with zero and large unsigned\n");
	his_ret = printf("205-his:  |%#x|%u|\n", 0, 4294967295u);
	mine_ret = ft_printf("205-mine: |%#x|%u|\n", 0, 4294967295u);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 206: %%d and %%i with INT_MAX and INT_MIN\n");
	his_ret = printf("206-his:  |%d|%i|\n", INT_MAX, INT_MIN);
	mine_ret = ft_printf("206-mine: |%d|%i|\n", INT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 207: %%s, %%p and %%d with NULL, valid ptr and 42\n");
	int n = 42;
	//	his_ret = printf("207-his:  |%s|%p|%d|\n", NULL, &n, n);
	mine_ret = ft_printf("207-mine: |%s|%p|%d|\n", NULL, &n, n);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 208: %%x, %%X, %%u with 0, UINT_MAX, and hex\n");
	his_ret = printf("208-his:  |%x|%X|%u|\n", 0, 0xABCD, UINT_MAX);
	mine_ret = ft_printf("208-mine: |%x|%X|%u|\n", 0, 0xABCD, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 209: mixed %%+d, %%c, %%s, and %%p with juicy edge\n");
	char c = '!';
	char *str = "Hello";
	his_ret = printf("209-his:  |%+d|%c|%s|%p|\n", 0, c, str, &c);
	mine_ret = ft_printf("209-mine: |%+d|%c|%s|%p|\n", 0, c, str, &c);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 210: %%s and %%d with NULL and 0\n");
	//	his_ret = printf("210-his:  |%s|%d|\n", NULL, 0);
	mine_ret = ft_printf("210-mine: |%s|%d|\n", NULL, 0);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 211: %%c and %%u with '\\0' and 0\n");
	his_ret = printf("211-his:  |%c|%u|\n", '\0', 0);
	mine_ret = ft_printf("211-mine: |%c|%u|\n", '\0', 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 212: %%x and %%s with UINT_MAX and empty string\n");
	his_ret = printf("212-his:  |%x|%s|\n", UINT_MAX, "");
	mine_ret = ft_printf("212-mine: |%x|%s|\n", UINT_MAX, "");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 213: %%X and %%d with 42 and -1000\n");
	his_ret = printf("213-his:  |%X|%d|\n", 42, -1000);
	mine_ret = ft_printf("213-mine: |%X|%d|\n", 42, -1000);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 214: %%p and %%u with NULL and -1 cast\n");
	his_ret = printf("214-his:  |%p|%u|\n", NULL, (unsigned int)-1);
	mine_ret = ft_printf("214-mine: |%p|%u|\n", NULL, (unsigned int)-1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 215: %%+d and %%s with 0 and NULL\n");
	//	his_ret = printf("215-his:  |%+d|%s|\n", 0, NULL);
	mine_ret = ft_printf("215-mine: |%+d|%s|\n", 0, NULL);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 216: %%x and %%p with 0 and pointer to int\n");
	int x216 = 256;
	his_ret = printf("216-his:  |%x|%p|\n", 0, &x216);
	mine_ret = ft_printf("216-mine: |%x|%p|\n", 0, &x216);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 217: %%%% and %%c and %%i combo\n");
	his_ret = printf("217-his:  |%%|%c|%i|\n", 'A', 1337);
	mine_ret = ft_printf("217-mine: |%%|%c|%i|\n", 'A', 1337);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 218: %%s, %%d and %%x with mix inputs\n");
	his_ret = printf("218-his:  |%s|%d|%x|\n", "abc", -123, 123);
	mine_ret = ft_printf("218-mine: |%s|%d|%x|\n", "abc", -123, 123);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 219: %%X and %%u and %%c\n");
	his_ret = printf("219-his:  |%X|%u|%c|\n", 0xABC, 4294967295u, 'Z');
	mine_ret = ft_printf("219-mine: |%X|%u|%c|\n", 0xABC, 4294967295u, 'Z');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 220: %%i and %%i with INT_MAX and INT_MIN\n");
	his_ret = printf("220-his:  |%i|%i|\n", INT_MAX, INT_MIN);
	mine_ret = ft_printf("220-mine: |%i|%i|\n", INT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 221: %%s and %%p with long string and NULL\n");
	his_ret = printf("221-his:  |%s|%p|\n", "test string", NULL);
	mine_ret = ft_printf("221-mine: |%s|%p|\n", "test string", NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 222: %%d and %%%% with negative value\n");
	his_ret = printf("222-his:  |%d|%%|\n", -99);
	mine_ret = ft_printf("222-mine: |%d|%%|\n", -99);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 223: %%x and %%x and %%x with 0, 1, and 255\n");
	his_ret = printf("223-his:  |%x|%x|%x|\n", 0, 1, 255);
	mine_ret = ft_printf("223-mine: |%x|%x|%x|\n", 0, 1, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 224: %%p and %%p with same ptr\n");
	int y224 = 99;
	his_ret = printf("224-his:  |%p|%p|\n", &y224, &y224);
	mine_ret = ft_printf("224-mine: |%p|%p|\n", &y224, &y224);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 225: %%#x and %%#X with 0x42\n");
	his_ret = printf("225-his:  |%#x|%#X|\n", 0x42, 0x42);
	mine_ret = ft_printf("225-mine: |%#x|%#X|\n", 0x42, 0x42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 226: %%i and %%s and %%u with edge mix\n");
	//	his_ret = printf("226-his:  |%i|%s|%u|\n", -2147483648, "", 4294967295u);
	mine_ret = ft_printf("226-mine: |%i|%s|%u|\n", -2147483648, "", 4294967295u);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 227: %%c and %%d with newline and INT_MAX\n");
	his_ret = printf("227-his:  |%c|%d|\n", '\n', INT_MAX);
	mine_ret = ft_printf("227-mine: |%c|%d|\n", '\n', INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 228: %%s and %%s with NULL and normal\n");
	//	his_ret = printf("228-his:  |%s|%s|\n", NULL, "non-null");
	mine_ret = ft_printf("228-mine: |%s|%s|\n", NULL, "non-null");
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 229: %%p and %%%% with real pointer\n");
	int val229 = 1337;
	his_ret = printf("229-his:  |%p|%%|\n", &val229);
	mine_ret = ft_printf("229-mine: |%p|%%|\n", &val229);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 230: %%+i and %%u with small values\n");
	his_ret = printf("230-his:  |%+i|%u|\n", 7, 7);
	mine_ret = ft_printf("230-mine: |%+i|%u|\n", 7, 7);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 231: %%#X and %%#x with 0 and 1\n");
	his_ret = printf("231-his:  |%#X|%#x|\n", 0, 1);
	mine_ret = ft_printf("231-mine: |%#X|%#x|\n", 0, 1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 232: %%x and %%d and %%c with wild values\n");
	his_ret = printf("232-his:  |%x|%d|%c|\n", 424242, -4242, 'a');
	mine_ret = ft_printf("232-mine: |%x|%d|%c|\n", 424242, -4242, 'a');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 233: %%%% %%%% %%%% \n");
	//	his_ret = printf("233-his:  |%%%|%%%|%%%|\n");
	mine_ret = ft_printf("233-mine: |%%%|%%%|%%%|\n");
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 234: %%c and %%s with null char and NULL\n");
	//	his_ret = printf("234-his:  |%c|%s|\n", '\0', NULL);
	mine_ret = ft_printf("234-mine: |%c|%s|\n", '\0', NULL);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 235: %%d and %%x with large numbers\n");
	his_ret = printf("235-his:  |%d|%x|\n", 2147483647, 305419896);
	mine_ret = ft_printf("235-mine: |%d|%x|\n", 2147483647, 305419896);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 236: %%x and %%X with same number\n");
	his_ret = printf("236-his:  |%x|%X|\n", 255, 255);
	mine_ret = ft_printf("236-mine: |%x|%X|\n", 255, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 237: %%s and %%c with tab and message\n");
	his_ret = printf("237-his:  |%s|%c|\n", "tab\tmessage", '\t');
	mine_ret = ft_printf("237-mine: |%s|%c|\n", "tab\tmessage", '\t');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 238: %%i and %%+i and %%.0d with 0\n");
	his_ret = printf("238-his:  |%i|%+i|%.0d|\n", 0, 0, 0);
	mine_ret = ft_printf("238-mine: |%i|%+i|%.0d|\n", 0, 0, 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 239: %%u and %%d with UINT_MAX and INT_MIN\n");
	his_ret = printf("239-his:  |%u|%d|\n", UINT_MAX, INT_MIN);
	mine_ret = ft_printf("239-mine: |%u|%d|\n", UINT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 240: %%d %%i %%u with 0, -1, UINT_MAX\n");
	his_ret = printf("240-his:  |%d|%i|%u|\n", 0, -1, UINT_MAX);
	mine_ret = ft_printf("240-mine: |%d|%i|%u|\n", 0, -1, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 241: %%s %%p %%s with NULL, &val, and empty\n");
	int val241 = 777;
	//	his_ret = printf("241-his:  |%s|%p|%s|\n", NULL, &val241, "");
	mine_ret = ft_printf("241-mine: |%s|%p|%s|\n", NULL, &val241, "");
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 242: %%#x %%#X %%#x with 0, 42, and 255\n");
	his_ret = printf("242-his:  |%#x|%#X|%#x|\n", 0, 42, 255);
	mine_ret = ft_printf("242-mine: |%#x|%#X|%#x|\n", 0, 42, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 243: %%c %%c %%c with space, tab, newline\n");
	his_ret = printf("243-his:  |%c|%c|%c|\n", ' ', '\t', '\n');
	mine_ret = ft_printf("243-mine: |%c|%c|%c|\n", ' ', '\t', '\n');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 244: %%+d %% d %%d with 1, 1, -1\n");
	his_ret = printf("244-his:  |%+d|% d|%d|\n", 1, 1, -1);
	mine_ret = ft_printf("244-mine: |%+d|% d|%d|\n", 1, 1, -1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 245: %%s %%s %%s with long, NULL, and short\n");
	//	his_ret = printf("245-his:  |%s|%s|%s|\n", "long string here", NULL, "yo");
	mine_ret = ft_printf("245-mine: |%s|%s|%s|\n", "long string here", NULL, "yo");
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 246: %%p %%p %%p with NULL, same, same\n");
	int val246 = 246;
	his_ret = printf("246-his:  |%p|%p|%p|\n", NULL, &val246, &val246);
	mine_ret = ft_printf("246-mine: |%p|%p|%p|\n", NULL, &val246, &val246);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 247: %%x %%X %%x with huge, max, and small\n");
	his_ret = printf("247-his:  |%x|%X|%x|\n", 0xABCDEF, 0xFFFFFFFF, 1);
	mine_ret = ft_printf("247-mine: |%x|%X|%x|\n", 0xABCDEF, 0xFFFFFFFF, 1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 248: %%%% %%d %%%% %%u with mix\n");
	his_ret = printf("248-his:  |%%|%d|%%|%u|\n", -42, 42u);
	mine_ret = ft_printf("248-mine: |%%|%d|%%|%u|\n", -42, 42u);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 249: %%+i %% i %%+i with 0, 1, -1\n");
	his_ret = printf("249-his:  |%+i|% i|%+i|\n", 0, 1, -1);
	mine_ret = ft_printf("249-mine: |%+i|% i|%+i|\n", 0, 1, -1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 250: %%#x %%x %%#X with 0, 0x42, 0xABC\n");
	his_ret = printf("250-his:  |%#x|%x|%#X|\n", 0, 0x42, 0xABC);
	mine_ret = ft_printf("250-mine: |%#x|%x|%#X|\n", 0, 0x42, 0xABC);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 251: %%s %%c %%s with null-char\n");
	his_ret = printf("251-his:  |%s|%c|%s|\n", "start", '\0', "end");
	mine_ret = ft_printf("251-mine: |%s|%c|%s|\n", "start", '\0', "end");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 252: %%d %%d %%d with negatives\n");
	his_ret = printf("252-his:  |%d|%d|%d|\n", -1, -42, -9999);
	mine_ret = ft_printf("252-mine: |%d|%d|%d|\n", -1, -42, -9999);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 253: %%u %%u %%u with 0, 1, UINT_MAX\n");
	his_ret = printf("253-his:  |%u|%u|%u|\n", 0, 1, UINT_MAX);
	mine_ret = ft_printf("253-mine: |%u|%u|%u|\n", 0, 1, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 254: %%s %%d %%x with empty, INT_MIN, hex\n");
	his_ret = printf("254-his:  |%s|%d|%x|\n", "", INT_MIN, 0xBEEF);
	mine_ret = ft_printf("254-mine: |%s|%d|%x|\n", "", INT_MIN, 0xBEEF);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 255: %%X %%u %%c with 0x42, 123, A\n");
	his_ret = printf("255-his:  |%X|%u|%c|\n", 0x42, 123u, 'A');
	mine_ret = ft_printf("255-mine: |%X|%u|%c|\n", 0x42, 123u, 'A');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 256: %%#X %%#x %%X with flags and values\n");
	his_ret = printf("256-his:  |%#X|%#x|%X|\n", 0xCAFE, 0xBEEF, 0x123);
	mine_ret = ft_printf("256-mine: |%#X|%#x|%X|\n", 0xCAFE, 0xBEEF, 0x123);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 257: %%+d %%-d %% d with same num\n");
	his_ret = printf("257-his:  |%+d|%-d|% d|\n", 42, 42, 42);
	mine_ret = ft_printf("257-mine: |%+d|%-d|% d|\n", 42, 42, 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 258: %%x %%x %%x with edge pattern\n");
	his_ret = printf("258-his:  |%x|%x|%x|\n", 0x0, 0xF, 0xFF);
	mine_ret = ft_printf("258-mine: |%x|%x|%x|\n", 0x0, 0xF, 0xFF);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 259: %%d %%d %%d with mixed signs\n");
	his_ret = printf("259-his:  |%d|%d|%d|\n", 123, -123, 0);
	mine_ret = ft_printf("259-mine: |%d|%d|%d|\n", 123, -123, 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 260: %%c %%s %%p with chars and strings\n");
	char ch260 = '!';
	his_ret = printf("260-his:  |%c|%s|%p|\n", ch260, "yo", &ch260);
	mine_ret = ft_printf("260-mine: |%c|%s|%p|\n", ch260, "yo", &ch260);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 261: %%%% %%%% %%%% — triple madness\n");
	//	his_ret = printf("261-his:  |%%%|%%%|%%%|\n");
	mine_ret = ft_printf("261-mine: |%%%|%%%|%%%|\n");
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 262: %%x %%X %%u with interesting values\n");
	his_ret = printf("262-his:  |%x|%X|%u|\n", 3735928559u, 305419896, 69);
	mine_ret = ft_printf("262-mine: |%x|%X|%u|\n", 3735928559u, 305419896, 69);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 263: %%d %%s %%x with NULL string\n");
	//	his_ret = printf("263-his:  |%d|%s|%x|\n", -42, NULL, 0x42);
	mine_ret = ft_printf("263-mine: |%d|%s|%x|\n", -42, NULL, 0x42);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 264: %%p %%p %%p with three pointers\n");
	int a264 = 1, b264 = 2, c264 = 3;
	his_ret = printf("264-his:  |%p|%p|%p|\n", &a264, &b264, &c264);
	mine_ret = ft_printf("264-mine: |%p|%p|%p|\n", &a264, &b264, &c264);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 265: %%d %%u %%d with UINT_MAX casted\n");
	his_ret = printf("265-his:  |%d|%u|%d|\n", (int)UINT_MAX, UINT_MAX, -123);
	mine_ret = ft_printf("265-mine: |%d|%u|%d|\n", (int)UINT_MAX, UINT_MAX, -123);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 266: %%#x with 0 and no precision\n");
	his_ret = printf("266-his:  |%#x|\n", 0);
	mine_ret = ft_printf("266-mine: |%#x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 267: %%#x with .0 precision and 0\n");
	his_ret = printf("267-his:  |%#.0x|\n", 0);
	mine_ret = ft_printf("267-mine: |%#.0x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 268: %%0x %%0X with padding 0 and value\n");
	his_ret = printf("268-his:  |%010x|%010X|\n", 42, 42);
	mine_ret = ft_printf("268-mine: |%010x|%010X|\n", 42, 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 269: %%10s %%10d with alignment\n");
	his_ret = printf("269-his:  |%10s|%10d|\n", "yo", 42);
	mine_ret = ft_printf("269-mine: |%10s|%10d|\n", "yo", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 270: %%0d %%+d %% d with 0\n");
	his_ret = printf("270-his:  |%0d|%+d|% d|\n", 0, 0, 0);
	mine_ret = ft_printf("270-mine: |%0d|%+d|% d|\n", 0, 0, 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 271: %%#X %%X %%x with big mix\n");
	his_ret = printf("271-his:  |%#X|%X|%x|\n", 0xF00, 0xBEEF, 0xCAFE);
	mine_ret = ft_printf("271-mine: |%#X|%X|%x|\n", 0xF00, 0xBEEF, 0xCAFE);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 272: %%p %%u %%d with real values\n");
	int a272 = 999;
	his_ret = printf("272-his:  |%p|%u|%d|\n", &a272, 424242, -4242);
	mine_ret = ft_printf("272-mine: |%p|%u|%d|\n", &a272, 424242, -4242);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 273: %%c %%c %%s with mix\n");
	his_ret = printf("273-his:  |%c|%c|%s|\n", 'x', '\0', "ok");
	mine_ret = ft_printf("273-mine: |%c|%c|%s|\n", 'x', '\0', "ok");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 274: %%+i %%-i %% i with edge cases\n");
	his_ret = printf("274-his:  |%+i|%-i|% i|\n", INT_MIN, INT_MAX, 0);
	mine_ret = ft_printf("274-mine: |%+i|%-i|% i|\n", INT_MIN, INT_MAX, 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 275: %%s %%s %%s with NULL spam\n");
	//	his_ret = printf("275-his:  |%s|%s|%s|\n", NULL, NULL, NULL);
	mine_ret = ft_printf("275-mine: |%s|%s|%s|\n", NULL, NULL, NULL);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 276: %%p %%p %%p with NULL\n");
	his_ret = printf("276-his:  |%p|%p|%p|\n", NULL, NULL, NULL);
	mine_ret = ft_printf("276-mine: |%p|%p|%p|\n", NULL, NULL, NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 277: %%d %%u %%x %%X combo-fuckery\n");
	his_ret = printf("277-his:  |%d|%u|%x|%X|\n", -1, 4294967295u, 0x123, 0x123);
	mine_ret = ft_printf("277-mine: |%d|%u|%x|%X|\n", -1, 4294967295u, 0x123, 0x123);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 278: %%#x %%#x %%#x with same value\n");
	his_ret = printf("278-his:  |%#x|%#x|%#x|\n", 0xDEAD, 0xDEAD, 0xDEAD);
	mine_ret = ft_printf("278-mine: |%#x|%#x|%#x|\n", 0xDEAD, 0xDEAD, 0xDEAD);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 279: %%%% %%%% %%%% %%%% %%%% chaos\n");
	his_ret = printf("279-his:  |%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	mine_ret = ft_printf("279-mine: |%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 280: %%s and wide padding %%20s\n");
	his_ret = printf("280-his:  |%20s|\n", "hi");
	mine_ret = ft_printf("280-mine: |%20s|\n", "hi");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 281: %%x with precision .0 and 0 value\n");
	his_ret = printf("281-his:  |%.0x|\n", 0);
	mine_ret = ft_printf("281-mine: |%.0x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 282: %%-10s with short string\n");
	his_ret = printf("282-his:  |%-10s|\n", "yo");
	mine_ret = ft_printf("282-mine: |%-10s|\n", "yo");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 283: %%010d with positive number\n");
	his_ret = printf("283-his:  |%010d|\n", 42);
	mine_ret = ft_printf("283-mine: |%010d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 284: %%+10d with positive number\n");
	his_ret = printf("284-his:  |%+10d|\n", 42);
	mine_ret = ft_printf("284-mine: |%+10d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 285: %%-+10d with positive number\n");
	his_ret = printf("285-his:  |%-+10d|\n", 42);
	mine_ret = ft_printf("285-mine: |%-+10d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 286: %%-#10x with 0x42\n");
	his_ret = printf("286-his:  |%-#10x|\n", 0x42);
	mine_ret = ft_printf("286-mine: |%-#10x|\n", 0x42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 287: %%#10x with 0\n");
	his_ret = printf("287-his:  |%#10x|\n", 0);
	mine_ret = ft_printf("287-mine: |%#10x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 288: %%010X with 0xDEAD\n");
	his_ret = printf("288-his:  |%010X|\n", 0xDEAD);
	mine_ret = ft_printf("288-mine: |%010X|\n", 0xDEAD);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 289: %%10p with real pointer\n");
	int val289 = 289;
	his_ret = printf("289-his:  |%10p|\n", &val289);
	mine_ret = ft_printf("289-mine: |%10p|\n", &val289);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 290: %%p with NULL and field width\n");
	his_ret = printf("290-his:  |%20p|\n", NULL);
	mine_ret = ft_printf("290-mine: |%20p|\n", NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 291: %%-20p with NULL\n");
	his_ret = printf("291-his:  |%-20p|\n", NULL);
	mine_ret = ft_printf("291-mine: |%-20p|\n", NULL);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 292: %%#x with .0 and 0\n");
	his_ret = printf("292-his:  |%#.0x|\n", 0);
	mine_ret = ft_printf("292-mine: |%#.0x|\n", 0);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 293: %%#.x with 42\n");
	his_ret = printf("293-his:  |%#.x|\n", 42);
	mine_ret = ft_printf("293-mine: |%#.x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 294: %%#x with precision\n");
	his_ret = printf("294-his:  |%#.5x|\n", 42);
	mine_ret = ft_printf("294-mine: |%#.5x|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 295: %%10.5d combo\n");
	his_ret = printf("295-his:  |%10.5d|\n", 42);
	mine_ret = ft_printf("295-mine: |%10.5d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 296: %%-10.5d combo\n");
	his_ret = printf("296-his:  |%-10.5d|\n", 42);
	mine_ret = ft_printf("296-mine: |%-10.5d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 297: %%+10.5d combo\n");
	his_ret = printf("297-his:  |%+10.5d|\n", 42);
	mine_ret = ft_printf("297-mine: |%+10.5d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 298: %%-+10.5d combo\n");
	his_ret = printf("298-his:  |%-+10.5d|\n", 42);
	mine_ret = ft_printf("298-mine: |%-+10.5d|\n", 42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 299: %%-+10.5d with negative\n");
	his_ret = printf("299-his:  |%-+10.5d|\n", -42);
	mine_ret = ft_printf("299-mine: |%-+10.5d|\n", -42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 300: %%d %%s\n");
	his_ret = printf("300-his:  |%d|%s|\n", 42, "hello");
	mine_ret = ft_printf("300-mine: |%d|%s|\n", 42, "hello");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 301: %%x %%p\n");
	int val301 = 301;
	his_ret = printf("301-his:  |%x|%p|\n", 0xdead, &val301);
	mine_ret = ft_printf("301-mine: |%x|%p|\n", 0xdead, &val301);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 302: %%c %%s %%d\n");
	his_ret = printf("302-his:  |%c|%s|%d|\n", 'A', "combo", -42);
	mine_ret = ft_printf("302-mine: |%c|%s|%d|\n", 'A', "combo", -42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 303: %%i %%u %%x\n");
	his_ret = printf("303-his:  |%i|%u|%x|\n", -1, 4294967295u, 255);
	mine_ret = ft_printf("303-mine: |%i|%u|%x|\n", -1, 4294967295u, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 304: %%X %%p %%c\n");
	char ch304 = '!';
	his_ret = printf("304-his:  |%X|%p|%c|\n", 48879, &ch304, ch304);
	mine_ret = ft_printf("304-mine: |%X|%p|%c|\n", 48879, &ch304, ch304);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 305: %%s %%s %%s\n");
	his_ret = printf("305-his:  |%s|%s|%s|\n", "one", "two", "three");
	mine_ret = ft_printf("305-mine: |%s|%s|%s|\n", "one", "two", "three");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 306: %%d %%d %%d\n");
	his_ret = printf("306-his:  |%d|%d|%d|\n", 1, 2, 3);
	mine_ret = ft_printf("306-mine: |%d|%d|%d|\n", 1, 2, 3);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 307: %%u %%u %%u\n");
	his_ret = printf("307-his:  |%u|%u|%u|\n", 0, 1234, UINT_MAX);
	mine_ret = ft_printf("307-mine: |%u|%u|%u|\n", 0, 1234, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 308: %%x %%x %%x\n");
	his_ret = printf("308-his:  |%x|%x|%x|\n", 0, 15, 255);
	mine_ret = ft_printf("308-mine: |%x|%x|%x|\n", 0, 15, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 309: %%X %%X %%X\n");
	his_ret = printf("309-his:  |%X|%X|%X|\n", 0, 15, 255);
	mine_ret = ft_printf("309-mine: |%X|%X|%X|\n", 0, 15, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 310: %%p %%p %%p\n");
	int a310 = 1, b310 = 2, c310 = 3;
	his_ret = printf("310-his:  |%p|%p|%p|\n", &a310, &b310, &c310);
	mine_ret = ft_printf("310-mine: |%p|%p|%p|\n", &a310, &b310, &c310);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 311: %%c %%c %%c\n");
	his_ret = printf("311-his:  |%c|%c|%c|\n", 'x', 'y', 'z');
	mine_ret = ft_printf("311-mine: |%c|%c|%c|\n", 'x', 'y', 'z');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 312: %%s %%p %%d %%x %%X %%c %%i %%u %%s %%p %%d %%%%\n");
	int val312 = 312;
	his_ret = printf("312-his:  |%s|%p|%d|%x|%X|%c|%i|%u|%s|%p|%d|%%|\n",
		  "yo", &val312, 123, 0xBEEF, 0xDEAD, 'A', -999, 999u, "end", NULL, -42);
	mine_ret = ft_printf("312-mine: |%s|%p|%d|%x|%X|%c|%i|%u|%s|%p|%d|%%|\n",
		      "yo", &val312, 123, 0xBEEF, 0xDEAD, 'A', -999, 999u, "end", NULL, -42);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 313: %%d %%i %%u %%x %%X %%c %%s %%p %%s %%u %%d %%%%\n");
	int val313 = 313;
	//	his_ret = printf("313-his:  |%d|%i|%u|%x|%X|%c|%s|%p|%s|%u|%d|%%|\n",
	//	  -1, 42, 123456789u, 0x1a2b, 0x1A2B, '!', "yo", &val313, NULL, UINT_MAX, INT_MIN);
	mine_ret = ft_printf("313-mine: |%d|%i|%u|%x|%X|%c|%s|%p|%s|%u|%d|%%|\n",
		      -1, 42, 123456789u, 0x1a2b, 0x1A2B, '!', "yo", &val313, NULL, UINT_MAX, INT_MIN);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 314: %%s %%s %%s %%s %%s\n");
	his_ret = printf("314-his:  |%s|%s|%s|%s|%s|\n", "a", "b", "c", "d", "e");
	mine_ret = ft_printf("314-mine: |%s|%s|%s|%s|%s|\n", "a", "b", "c", "d", "e");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 315: %%d %%d %%d %%d %%d\n");
	his_ret = printf("315-his:  |%d|%d|%d|%d|%d|\n", 0, -1, 1, INT_MAX, INT_MIN);
	mine_ret = ft_printf("315-mine: |%d|%d|%d|%d|%d|\n", 0, -1, 1, INT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 316: %%u %%u %%u %%u %%u\n");
	his_ret = printf("316-his:  |%u|%u|%u|%u|%u|\n", 0, 1, 42, 1234, UINT_MAX);
	mine_ret = ft_printf("316-mine: |%u|%u|%u|%u|%u|\n", 0, 1, 42, 1234, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 317: %%x %%x %%x %%x %%x\n");
	his_ret = printf("317-his:  |%x|%x|%x|%x|%x|\n", 1, 15, 16, 255, 256);
	mine_ret = ft_printf("317-mine: |%x|%x|%x|%x|%x|\n", 1, 15, 16, 255, 256);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 318: %%X %%X %%X %%X %%X\n");
	his_ret = printf("318-his:  |%X|%X|%X|%X|%X|\n", 1, 15, 16, 255, 256);
	mine_ret = ft_printf("318-mine: |%X|%X|%X|%X|%X|\n", 1, 15, 16, 255, 256);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 319: %%%% %%%% %%%% %%%% %%%%\n");
	his_ret = printf("319-his:  |%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	mine_ret = ft_printf("319-mine: |%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 320: %%d %%u %%i %%x %%X %%s %%c %%p %%d %%u\n");
	int val320 = 320;
	his_ret = printf("320-his:  |%d|%u|%i|%x|%X|%s|%c|%p|%d|%u|\n",
		  -320, 320u, 320, 0x320, 0x320, "hello", 'F', &val320, INT_MAX, UINT_MAX);
	mine_ret = ft_printf("320-mine: |%d|%u|%i|%x|%X|%s|%c|%p|%d|%u|\n",
		      -320, 320u, 320, 0x320, 0x320, "hello", 'F', &val320, INT_MAX, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 321: %%s %%s %%s %%s %%s %%s\n");
	//	his_ret = printf("321-his:  |%s|%s|%s|%s|%s|%s|\n", "A", "B", "C", "", "Test", NULL);
	mine_ret = ft_printf("321-mine: |%s|%s|%s|%s|%s|%s|\n", "A", "B", "C", "", "Test", NULL);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 322: %%c %%c %%c %%c %%c\n");
	his_ret = printf("322-his:  |%c|%c|%c|%c|%c|\n", 'a', 'b', 'c', 'd', 'e');
	mine_ret = ft_printf("322-mine: |%c|%c|%c|%c|%c|\n", 'a', 'b', 'c', 'd', 'e');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 323: %%p %%p %%p %%p %%p\n");
	int a323 = 1, b323 = 2, c323 = 3, d323 = 4, e323 = 5;
	his_ret = printf("323-his:  |%p|%p|%p|%p|%p|\n", &a323, &b323, &c323, &d323, &e323);
	mine_ret = ft_printf("323-mine: |%p|%p|%p|%p|%p|\n", &a323, &b323, &c323, &d323, &e323);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 324: %%u %%u %%u %%u %%u\n");
	his_ret = printf("324-his:  |%u|%u|%u|%u|%u|\n", 0u, 1u, 123u, 1000u, UINT_MAX);
	mine_ret = ft_printf("324-mine: |%u|%u|%u|%u|%u|\n", 0u, 1u, 123u, 1000u, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 325: %%x %%x %%x %%x %%x\n");
	his_ret = printf("325-his:  |%x|%x|%x|%x|%x|\n", 0, 10, 15, 16, 255);
	mine_ret = ft_printf("325-mine: |%x|%x|%x|%x|%x|\n", 0, 10, 15, 16, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 326: %%X %%X %%X %%X %%X\n");
	his_ret = printf("326-his:  |%X|%X|%X|%X|%X|\n", 0, 10, 15, 16, 255);
	mine_ret = ft_printf("326-mine: |%X|%X|%X|%X|%X|\n", 0, 10, 15, 16, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 327: %%d %%i %%d %%i %%d\n");
	his_ret = printf("327-his:  |%d|%i|%d|%i|%d|\n", -1, -2, 3, 0, INT_MAX);
	mine_ret = ft_printf("327-mine: |%d|%i|%d|%i|%d|\n", -1, -2, 3, 0, INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 328: %%d %%d %%d %%d %%d with negatives\n");
	his_ret = printf("328-his:  |%d|%d|%d|%d|%d|\n", -10, -100, -999, -INT_MAX, INT_MIN);
	mine_ret = ft_printf("328-mine: |%d|%d|%d|%d|%d|\n", -10, -100, -999, -INT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 329: %%%% %%%% %%%% %%%% %%%% %%%%\n");
	his_ret = printf("329-his:  |%%%%|%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	mine_ret = ft_printf("329-mine: |%%%%|%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 320: %%d %%u %%i %%x %%X %%s %%c %%p %%d %%u\n");
	his_ret = printf("320-his:  |%d|%u|%i|%x|%X|%s|%c|%p|%d|%u|\n",
		  -320, 320u, 320, 0x320, 0x320, "hello", 'F', &val320, INT_MAX, UINT_MAX);
	mine_ret = ft_printf("320-mine: |%d|%u|%i|%x|%X|%s|%c|%p|%d|%u|\n",
		      -320, 320u, 320, 0x320, 0x320, "hello", 'F', &val320, INT_MAX, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 321: %%s %%s %%s %%s %%s %%s\n");
	//	his_ret = printf("321-his:  |%s|%s|%s|%s|%s|%s|\n", "A", "B", "C", "", "Test", NULL);
	mine_ret = ft_printf("321-mine: |%s|%s|%s|%s|%s|%s|\n", "A", "B", "C", "", "Test", NULL);
	//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 322: %%c %%c %%c %%c %%c\n");
	his_ret = printf("322-his:  |%c|%c|%c|%c|%c|\n", 'a', 'b', 'c', 'd', 'e');
	mine_ret = ft_printf("322-mine: |%c|%c|%c|%c|%c|\n", 'a', 'b', 'c', 'd', 'e');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 323: %%p %%p %%p %%p %%p\n");
	his_ret = printf("323-his:  |%p|%p|%p|%p|%p|\n", &a323, &b323, &c323, &d323, &e323);
	mine_ret = ft_printf("323-mine: |%p|%p|%p|%p|%p|\n", &a323, &b323, &c323, &d323, &e323);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 324: %%u %%u %%u %%u %%u\n");
	his_ret = printf("324-his:  |%u|%u|%u|%u|%u|\n", 0u, 1u, 123u, 1000u, UINT_MAX);
	mine_ret = ft_printf("324-mine: |%u|%u|%u|%u|%u|\n", 0u, 1u, 123u, 1000u, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 325: %%x %%x %%x %%x %%x\n");
	his_ret = printf("325-his:  |%x|%x|%x|%x|%x|\n", 0, 10, 15, 16, 255);
	mine_ret = ft_printf("325-mine: |%x|%x|%x|%x|%x|\n", 0, 10, 15, 16, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 326: %%X %%X %%X %%X %%X\n");
	his_ret = printf("326-his:  |%X|%X|%X|%X|%X|\n", 0, 10, 15, 16, 255);
	mine_ret = ft_printf("326-mine: |%X|%X|%X|%X|%X|\n", 0, 10, 15, 16, 255);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 327: %%d %%i %%d %%i %%d\n");
	his_ret = printf("327-his:  |%d|%i|%d|%i|%d|\n", -1, -2, 3, 0, INT_MAX);
	mine_ret = ft_printf("327-mine: |%d|%i|%d|%i|%d|\n", -1, -2, 3, 0, INT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 328: %%d %%d %%d %%d %%d with negatives\n");
	his_ret = printf("328-his:  |%d|%d|%d|%d|%d|\n", -10, -100, -999, -INT_MAX, INT_MIN);
	mine_ret = ft_printf("328-mine: |%d|%d|%d|%d|%d|\n", -10, -100, -999, -INT_MAX, INT_MIN);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 329: %%%% %%%% %%%% %%%% %%%% %%%%\n");
	his_ret = printf("329-his:  |%%%%|%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	mine_ret = ft_printf("329-mine: |%%%%|%%%%|%%%%|%%%%|%%%%|%%%%|\n");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 350: %%d %%u %%x %%X %%i %%c %%s %%p %%s %%c\n");
	int v350 = 350;
//	his_ret = printf("350-his:  |%d|%u|%x|%X|%i|%c|%s|%p|%s|%c|\n",
//		  -350, 350u, 0xdead, 0xBEEF, 0, '@', "yo", &v350, NULL, 'Z');
	mine_ret = ft_printf("350-mine: |%d|%u|%x|%X|%i|%c|%s|%p|%s|%c|\n",
		      -350, 350u, 0xdead, 0xBEEF, 0, '@', "yo", &v350, NULL, 'Z');
//	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 351: %%s %%p %%x %%X %%u %%d %%i %%c %%%%\n");
	int v351 = 351;
	his_ret = printf("351-his:  |%s|%p|%x|%X|%u|%d|%i|%c|%%|\n",
		  "flow", &v351, 0x42, 0x42, 123456u, -123, 0, 'F');
	mine_ret = ft_printf("351-mine: |%s|%p|%x|%X|%u|%d|%i|%c|%%|\n",
		      "flow", &v351, 0x42, 0x42, 123456u, -123, 0, 'F');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 352: %%u %%u %%u %%u %%u %%u %%u %%u %%u %%u\n");
	his_ret = printf("352-his:  |%u|%u|%u|%u|%u|%u|%u|%u|%u|%u|\n",
		  0u, 1u, 42u, 123u, 9999u, 55555u, 77777u, 88888u, 99999u, UINT_MAX);
	mine_ret = ft_printf("352-mine: |%u|%u|%u|%u|%u|%u|%u|%u|%u|%u|\n",
		      0u, 1u, 42u, 123u, 9999u, 55555u, 77777u, 88888u, 99999u, UINT_MAX);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 353: %%d %%d %%d %%d %%d %%d %%d %%d %%d %%d\n");
	his_ret = printf("353-his:  |%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n",
		  -10, -100, 0, 10, 42, 100, 999, INT_MIN, INT_MAX, -1);
	mine_ret = ft_printf("353-mine: |%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n",
		      -10, -100, 0, 10, 42, 100, 999, INT_MIN, INT_MAX, -1);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 354: %%i %%i %%i %%i %%i %%i %%i %%i %%i %%i\n");
	his_ret = printf("354-his:  |%i|%i|%i|%i|%i|%i|%i|%i|%i|%i|\n",
		  1, -1, 2, -2, 3, -3, 1000, -1000, 123456, -123456);
	mine_ret = ft_printf("354-mine: |%i|%i|%i|%i|%i|%i|%i|%i|%i|%i|\n",
		      1, -1, 2, -2, 3, -3, 1000, -1000, 123456, -123456);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 355-1: %%x with 4096\n");
	his_ret = printf("355-1-his:  |%x|\n", 4096);
	mine_ret = printf("355-1-mine: |%x|\n", 4096);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 355-2\n");
	int x = 4096;
	printf("|%x|%p|\n", x, &x);
	ft_printf("|%x|%p|\n", x, &x);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 355: %%x %%x %%x %%x %%x %%x %%x %%x %%x %%x\n");
	his_ret = printf("355-his:  |%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|\n",
		  0, 1, 10, 100, 255, 256, 1024, 4096, 65535, 0xDEAD);
	mine_ret = ft_printf("355-mine: |%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|\n",
		      0, 1, 10, 100, 255, 256, 1024, 4096, 65535, 0xDEAD);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 356: %%X %%X %%X %%X %%X %%X %%X %%X %%X %%X\n");
	his_ret = printf("356-his:  |%X|%X|%X|%X|%X|%X|%X|%X|%X|%X|\n",
		  0, 1, 10, 100, 255, 256, 1024, 4096, 65535, 0xBEEF);
	mine_ret = ft_printf("356-mine: |%X|%X|%X|%X|%X|%X|%X|%X|%X|%X|\n",
		      0, 1, 10, 100, 255, 256, 1024, 4096, 65535, 0xBEEF);
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 357: %%c %%c %%c %%c %%c %%c %%c %%c %%c %%c\n");
	his_ret = printf("357-his:  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",
		  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
	mine_ret = ft_printf("357-mine: |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",
		      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 358: %%s %%s %%s %%s %%s %%s %%s %%s %%s %%s\n");
	his_ret = printf("358-his:  |%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|\n",
		  "one", "two", "three", "four", "five", "six", "seven", "eight", "", "\0");
	mine_ret = ft_printf("358-mine: |%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|\n",
		      "one", "two", "three", "four", "five", "six", "seven", "eight", "", "\0");
	assert(his_ret == mine_ret);
	printf("\n\n");

	printf("test 359: %%p %%p %%p %%p %%p %%p %%p %%p %%p %%p\n");
	int p359[10];
	his_ret = printf("359-his:  |%p|%p|%p|%p|%p|%p|%p|%p|%p|%p|\n",
		  &p359[0], &p359[1], &p359[2], &p359[3], &p359[4],
		  &p359[5], &p359[6], &p359[7], &p359[8], &p359[9]);
	mine_ret = ft_printf("359-mine: |%p|%p|%p|%p|%p|%p|%p|%p|%p|%p|\n",
		      &p359[0], &p359[1], &p359[2], &p359[3], &p359[4],
		      &p359[5], &p359[6], &p359[7], &p359[8], &p359[9]);
	assert(his_ret == mine_ret);
	printf("\n\n");


	return (0);
}
