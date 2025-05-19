/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:14:21 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/17 11:52:12 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_arguments(va_list args, char *str, int *i)
{
	int	print_length;

	print_length = 0;
	if (*str == 'c')
		print_length += ft_print_char(va_arg(args, int));
	else if (*str == 's')
		print_length += ft_print_str(va_arg(args, char *));
	else if (*str == 'p')
		print_length += ft_print_ptr(va_arg(args, void *));
	else if (*str == 'd' || *str == 'i')
		print_length += ft_print_dec(va_arg(args, int));
	else if (*str == 'x')
		print_length += ft_print_hex(va_arg(args, int), 'l');
	else if (*str == 'X')
		print_length += ft_print_hex(va_arg(args, int), 'u');
	else if (*str == '%' || *str == 'E')
		print_length += ft_print_char('%');
	else if (*str == '#')
		print_length += ft_print_prefix(args, str, i);
	else if (*str == '+')
		print_length += ft_print_sign(args, str, i);
	else
		print_length += (ft_print_char('%') + ft_print_char(*str));
	return (print_length);
}

int	ft_print_sign(va_list args, char *str, int *i)
{
	int	print_length;

	print_length = 0;
	if (*(str + 1))
	{
		if (*(str + 1) == 'd' || *(str + 1) == 'i')
			print_length += ft_print_dec_sign(va_arg(args, int), i);
		else
			print_length += (ft_print_char('%') + ft_print_char('+'));
	}
	else
		return (ft_print_char('%'));
	return (print_length);
		
}

int	ft_print_prefix(va_list args, char *str, int *i)
{
	int	print_length;

	print_length = 0;
	if (*(str + 1))
	{
		if (*(str + 1) == 'x')
			print_length += ft_print_hex_prefix(va_arg(args, int), 'l', i);
		else if (*(str + 1) == 'X')
			print_length += ft_print_hex_prefix(va_arg(args, int), 'u', i);
		else
			print_length += (ft_print_char('%') + ft_print_char('#'));
	}
	else
		return (ft_print_char('%'));
	return (print_length);
}
