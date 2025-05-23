/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:10:35 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/19 14:10:38 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include <stdio.h>

static int	ft_num_len(unsigned int nb)
{
	int	size;

	if (nb == 0)
		return (1);
	size = 0;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb != 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

int	ft_print_unsigned(int nb)
{
	unsigned int nb_ul;

	if (nb > 0)
		nb_ul = nb;
	else
		nb_ul = UINT_MAX + nb + 1;
	ft_putnbr_fd(nb_ul, 1);
	return (ft_num_len(nb_ul));
}

int	ft_validate_flags_uns(t_modifiers *modifiers)
{
	if (modifiers->plus || modifiers->space || modifiers->hashtag)
		modifiers->valid = 0;
	if (modifiers->dot && modifiers->zero)
		modifiers->zero = 0;
	return (modifiers->valid);
}

int	ft_print_uns_mod(int nb, t_modifiers *modifiers)
{
	int	print_length;
	unsigned int	nb_ul;

	print_length = 0;
	if (nb > 0)
		nb_ul = nb;
	else
		nb_ul = UINT_MAX + nb + 1;
	if (!modifiers->width && !modifiers->precision)
		return (ft_print_unsigned(nb_ul));
	else if (modifiers->width && !modifiers->precision)
	{
		if (modifiers->zero)
			print_length += ft_add_padding_uns(ft_num_len(nb_ul), modifiers->width, '0');
		else if (!modifiers->minus)
			print_length += ft_add_padding_uns(ft_num_len(nb_ul), modifiers->width, ' ');
		print_length += ft_print_unsigned(nb_ul);
		if (modifiers->minus)
			print_length += ft_add_padding_uns(ft_num_len(nb_ul), modifiers->width, ' ');
	}
	else if (!modifiers->width && modifiers->precision)
	{
		print_length += ft_add_padding_uns(ft_num_len(nb_ul), modifiers->precision, '0');
		print_length += ft_print_unsigned(nb_ul);
	}
	else
		return (ft_print_uns_mod_width_and_precision(nb_ul, modifiers));
	return (print_length);
}

int	ft_print_uns_mod_width_and_precision(unsigned int nb_ul, t_modifiers *modifiers)
{
	int	print_length;
	int	num_len;

	print_length = 0;
	num_len = ft_num_len(nb_ul);
	if (!modifiers->minus && modifiers->precision >= num_len)
		print_length += ft_add_padding_uns(modifiers->precision, modifiers->width, ' ');
	if (!modifiers->minus && modifiers->precision < num_len)
		print_length += ft_add_padding_uns(modifiers->precision, modifiers->width, ' ');
	print_length += ft_add_padding_uns(modifiers->precision, modifiers->width, '0');
	print_length += ft_print_unsigned(nb_ul);
	if (modifiers->minus && modifiers->precision >= num_len)
		print_length += ft_add_padding_uns(modifiers->precision, modifiers->width, ' ');
	if (modifiers->minus && modifiers->precision < num_len)
		print_length += ft_add_padding_uns(modifiers->precision, modifiers->width, ' ');
	return (print_length);
}

int	ft_add_padding_uns(int i, int max, char c)
{
	int	print_length;

	print_length = 0;
	while (i++ < max)
		print_length += ft_print_char(c);
	return (print_length);
}

