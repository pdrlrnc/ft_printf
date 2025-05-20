/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:44:58 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/15 15:16:45 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static int	ft_is_valid_modifier(t_modifiers *modifiers)
{
	if (modifiers->zero || modifiers->hashtag || modifiers->space
			|| modifiers->plus || modifiers->precision)
		return (0);
	return (1);
}

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_char_mod(char c, t_modifiers *modifiers)
{
	int	print_length;

	print_length = 0;
	if (ft_is_valid_modifier(modifiers))
	{
		if (modifiers->width)
		{
			modifiers->width--;
			if (modifiers->minus)
			{
				print_length += ft_print_char(c);
				while (modifiers->width)
				{
					print_length += ft_print_char(' ');
					modifiers->width--;
				}
			} else {
				while (modifiers->width)
				{
					print_length += ft_print_char(' ');
					modifiers->width--;
				}
				print_length += ft_print_char(c);
			}
		} else
			print_length += ft_print_char(c);
		return (print_length);
	}
	return (-1);
}
