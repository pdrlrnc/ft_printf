/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:18:29 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/25 12:18:32 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_handle_sign_dec(int nb, t_mdf *modifiers)
{
	int	print_length;

	print_length = 0;
	if (modifiers->plus && nb > 0)
		print_length += ft_print_char('+');
	if (modifiers->space && nb > 0)
		print_length += ft_print_char(' ');
	return (print_length);
}

int	ft_handle_negative(int *nb, int *num_size)
{
	int	print_length;

	print_length = 0;
	if (*nb < 0)
	{
		print_length += ft_print_char('-');
		*nb = *nb * (-1);
		if (num_size != NULL)
			(*num_size)--;
	}
	return (print_length);
}

int	ft_print_padding_dec(int print_length, int max, int i, char c)
{
	while (i < max)
	{
		print_length += ft_print_char(c);
		i++;
	}
	return (print_length);
}
