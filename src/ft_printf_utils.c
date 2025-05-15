/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:14:21 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/15 12:51:30 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_num_args(const char *str)
{
	int	num_args;
	int	i;

	num_args = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == '%')
			if (*(str + i + 1))
				if (ft_is_valid(*(str + i)))
					num_args++;
		i++;
	}
	return (num_args);
}

int ft_is_valid(char conversion_specifier)
{
	int	is_valid;

	is_valid = 0;
	if (conversion_specifier == 'c')
		is_valid = 1;
	else if (conversion_specifier == 's')
		is_valid = 1;
	else if (conversion_specifier == 'p')
		is_valid = 1;
	else if (conversion_specifier == 'd')
		is_valid = 1;
	else if (conversion_specifier == 'i')
		is_valid = 1;
	else if (conversion_specifier == 'u')
		is_valid = 1;
	else if (conversion_specifier == 'x')
		is_valid = 1;
	else if (conversion_specifier == 'X')
		is_valid = 1;
	else if (conversion_specifier == '%')
		is_valid = 1;
	return is_valid;
}

int	ft_print_arguments(va_list args, char c)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_print_char(v_arg(args, char));
		
}
