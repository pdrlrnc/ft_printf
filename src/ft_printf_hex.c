/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 11:24:18 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/17 11:50:59 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_print_hex(int nb, char ccase)
{
	nb = (unsigned int) nb;
	if (ccase == 'l')
		return (ft_putnbr_base_fd(nb, "0123456789abcdef", 1));
	else
		return (ft_putnbr_base_fd(nb, "0123456789ABCDEF", 1));
}

int	ft_validate_flags_hex(t_mdf *modifiers)
{
	if (modifiers->space || modifiers->plus)
		modifiers->valid = 0;
	if (modifiers->zero && modifiers->minus)
		modifiers->valid = 0;
	if (modifiers->zero && modifiers->dot)
		modifiers->valid = 0;
	return (modifiers->valid);
}

int	ft_print_hex_mod(int nb, char ccase, t_mdf *modifiers)
{
	int		print_length;
	char	*base;

	if (ccase == 'u')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	print_length = 0;
	if (!modifiers->width && !modifiers->precision)
	{
		if (modifiers->hashtag && nb != 0)
			print_length += ft_print_hasthag_hex(ccase);
		print_length += ft_print_hex(nb, ccase);
	}
	else if (modifiers->width)
		return (ft_print_hex_mod_width(nb, ccase, modifiers, ft_putnbr_base_fd(nb, base, -1)));
	else
		return (ft_print_hex_mod_precision(nb, ccase, modifiers, ft_putnbr_base_fd(nb, base, -1)));
	return (print_length);
}

int	ft_print_hex_mod_width(int nb, char ccase, t_mdf *modifiers, int num_len)
{
	int	print_length;

	print_length = 0;
	if (!modifiers->precision)
	{
		if (modifiers->hashtag && nb != 0)
			num_len += 2;
		if (modifiers->hashtag && nb != 0 && modifiers->zero)
			print_length += ft_print_hasthag_hex(ccase);
		if (modifiers->zero)
			print_length += ft_print_padding_hex(num_len, modifiers->width, '0');
		else if (!modifiers->minus)
			print_length += ft_print_padding_hex(num_len, modifiers->width, ' ');
		if (modifiers->hashtag && nb != 0 && !modifiers->zero)
			print_length += ft_print_hasthag_hex(ccase);
		print_length += ft_print_hex(nb, ccase);
		if (modifiers->minus)
			print_length += ft_print_padding_hex(num_len, modifiers->width, ' ');
	}
	else
		return (ft_print_hex_mod_width_and_precision(nb, ccase, modifiers, num_len));
	return (print_length);
}

int	ft_print_hex_mod_precision(int nb, char ccase, t_mdf *modifiers, int num_len)
{
	int	print_length;

	print_length = 0;
	if (modifiers->hashtag)
		print_length += ft_print_hasthag_hex(ccase);
	print_length += ft_print_padding_hex(num_len, modifiers->precision, '0');
	print_length += ft_print_hex(nb, ccase);
	return (print_length);
}

int	ft_print_hex_mod_width_and_precision(int nb, char ccase, t_mdf *modifiers, int num_len)
{
	int	print_length;

	print_length = 0;
	if (modifiers->hashtag && nb != 0 && !modifiers->minus)
		print_length += ft_print_padding_hex(modifiers->precision + 2, modifiers->width, ' ');
	else if (!modifiers->hashtag && !modifiers->minus)
		print_length += ft_print_padding_hex(modifiers->precision, modifiers->width, ' ');
	if (modifiers->hashtag)
		print_length += ft_print_hasthag_hex(ccase);
	print_length += ft_print_padding_hex(num_len, modifiers->precision, '0');
	print_length += ft_print_hex(nb, ccase);
	if (modifiers->hashtag && nb != 0 && modifiers->minus)
		print_length += ft_print_padding_hex(modifiers->precision + 2, modifiers->width, ' ');
	else if (!modifiers->hashtag && modifiers->minus)
		print_length += ft_print_padding_hex(modifiers->precision, modifiers->width, ' ');
	return (print_length);

}

int	ft_print_hasthag_hex(char ccase)
{
	int	print_length;

	print_length = 0;
	if (ccase == 'l')
		print_length += ft_print_str("0x");
	else
		print_length += ft_print_str("0X");
	return (print_length);

}

int	ft_print_padding_hex(int i, int max, char c)
{
	int	print_length;

	print_length = 0;
	while (i++ < max)
		print_length += ft_print_char(c);
	return (print_length);
}
