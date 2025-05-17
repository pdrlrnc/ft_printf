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

int	ft_print_arguments(va_list args, char c)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_print_char(va_arg(args, int));
	if (c == 's')
		print_length += ft_print_str(va_arg(args, char *));
	if (c == 'p')
		print_length += ft_print_ptr(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		print_length += ft_print_dec(va_arg(args, int));
	if (c == 'x')
		print_length += ft_print_hex(va_arg(args, int), 'l');
	if (c == 'X')
		print_length += ft_print_hex(va_arg(args, int), 'u');
	if (c == '%')
		print_length += ft_print_char('%');
	return (print_length);		
}
