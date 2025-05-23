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
#include "libft.h"

int	ft_print_arguments(va_list args, char *str, int *i)
{
	t_modifiers	modifiers;

	if (*(str + *i) == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*(str + *i) == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*(str + *i) == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (*(str + *i) == 'd' || *(str + *i) == 'i')
		return (ft_print_dec(va_arg(args, int)));
	else if (*(str + *i) == 'x')
		return (ft_print_hex(va_arg(args, int), 'l'));
	else if (*(str + *i) == 'X')
		return (ft_print_hex(va_arg(args, int), 'u'));
	else if (*(str + *i) == 'u')
		return (ft_print_unsigned(va_arg(args, int)));
	else if (*(str + *i) == '%' || *(str + *i) == 'E')
		return (ft_print_char('%'));
	else
		ft_validate_modifiers(str, i, &modifiers);
	return ft_use_modifiers(args, &modifiers);
}

static int	ft_is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
			|| c == 'x' || c == 'X' || c == 'u' || c == '%')
		return (1);
	return (0);
}

static int	ft_is_flag(char c)
{
	if (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0')
		return (1);
	return (0);
}

int	ft_use_modifiers(va_list args, t_modifiers *modifiers)
{
	if (!modifiers->valid)
		return (ft_print_char('%'));
	else if (modifiers->specifier == 'c')
		return (ft_print_char_mod(va_arg(args, int), modifiers));
	else if (modifiers->specifier == 's')
		return (ft_print_str_mod(va_arg(args, char *), modifiers));
	else if (modifiers->specifier == 'd')
		return (ft_print_dec_mod(va_arg(args, int), modifiers));
	else if (modifiers->specifier == 'p')
		return (ft_print_ptr_mod(va_arg(args, void *), modifiers));
	else if (modifiers->specifier == 'x')
		return (ft_print_hex_mod(va_arg(args, int), 'l', modifiers));
	else if (modifiers->specifier == 'X')
		return (ft_print_hex_mod(va_arg(args, int), 'u', modifiers));
	else
		return (ft_print_char('%'));
}

t_modifiers	*ft_validate_modifiers(char *str, int *i, t_modifiers *modifiers)
{
	int	old_i;

	*modifiers = (t_modifiers){0};
	old_i = *i;
	while (ft_is_flag(*(str + old_i)))
	{
		if (*(str + old_i) == '-')
			modifiers->minus = 1;
		else if (*(str + old_i) == '+')
			modifiers->plus = 1;
		else if (*(str + old_i) == ' ')
			modifiers->space = 1;
		else if (*(str + old_i) == '#')
			modifiers->hashtag = 1;
		else if (*(str + old_i) == '0')
			modifiers->zero = 1;
		old_i++;
	}
	if (ft_isdigit(*(str + old_i)))
	{
		modifiers->width = 0;
		while (ft_isdigit(*(str + old_i)))
			modifiers->width = modifiers->width * 10 + (*(str + old_i++) - '0');
	}
	if (*(str + old_i) == '.')
	{
		old_i++;
		modifiers->dot = 1;
		modifiers->precision = 0;
		while (ft_isdigit(*(str + old_i)))
			modifiers->precision = modifiers->precision * 10 + (*(str + old_i++) - '0');
	}
	if (ft_is_specifier(*(str + old_i)))
	{
		modifiers->specifier = *(str + old_i);
		modifiers->valid = 1;
		if (ft_validate_modifiers_for_specifier(modifiers))
			*i = old_i;
		else
			(*i)--;
	}
	return (modifiers);
}

int	ft_validate_modifiers_for_specifier(t_modifiers *modifiers)
{
	if (modifiers->specifier == 'd')
		return (ft_validate_flags_dec(modifiers));
	if (modifiers->specifier == 'p')
		return (ft_validate_flags_ptr(modifiers));
	if (modifiers->specifier == 'x' || modifiers->specifier == 'X')
		return (ft_validate_flags_hex(modifiers));
	return (1);
}
