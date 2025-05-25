/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:37:38 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/15 16:51:32 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static int	ft_num_size(long nb)
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

int	ft_print_dec(int nb)
{
	ft_putnbr_fd(nb, 1);
	return (ft_num_size(nb));
}

int	ft_validate_flags_dec(t_mdf *modifiers)
{
	if (modifiers->zero && modifiers->minus)
		modifiers->valid = 0;
	if (modifiers->plus && modifiers->space)
		modifiers->valid = 0;
	if (modifiers->hashtag)
		modifiers->valid = 0;
	return (modifiers->valid);

}

static int	ft_handle_plain_dec(int nb, t_mdf *modifiers)
{
	int	print_length;

	print_length = 0;
	if (nb <= 0)
		print_length += ft_print_dec(nb);
	else if (modifiers->plus)
		print_length += (ft_print_char('+') + ft_print_dec(nb));
	else if (modifiers->space)
		print_length += (ft_print_char(' ') + ft_print_dec(nb));
	else
		print_length += ft_print_dec(nb);
	return (print_length);
}

static int	ft_handle_width_only_dec(int nb, t_mdf *modifiers)
{
	int	print_length;
	int	num_size;

	num_size = ft_num_size(nb);
	print_length = 0;
	if (modifiers->width <= num_size)
		return (modifiers->width = 0, ft_print_dec_mod(nb, modifiers));
	else if (modifiers->minus)
	{
		print_length += ft_handle_sign_dec(nb, modifiers);
		print_length += ft_print_dec(nb);
		print_length = ft_print_padding_dec(print_length, print_length, modifiers->width, ' ');
	} 
	else
	{
		if (modifiers->zero)
		{
			if (nb > 0 && (modifiers->plus || modifiers->space))
				num_size++;
			print_length += ft_handle_sign_dec(nb, modifiers);
			print_length += ft_handle_negative(&nb, NULL);
			print_length += ft_print_padding_dec(print_length, modifiers->width, num_size , '0');
			print_length += ft_print_dec(nb);
		} 
		else
		{
			if ((modifiers->plus || modifiers->space) && nb > 0)
				num_size++;
			print_length = ft_print_padding_dec(print_length, modifiers->width, num_size ,' ');
			print_length += ft_handle_sign_dec(nb, modifiers);
			print_length += ft_print_dec(nb);
		}
	}
	return (print_length);
}

static int	ft_handle_precision(int nb, t_mdf *modifiers)
{
	int	print_length;
	int	num_size;

	num_size = ft_num_size(nb);
	print_length = 0;
	if (modifiers->width <= modifiers->precision)
	{
		print_length += ft_handle_sign_dec(nb, modifiers);
		print_length += ft_handle_negative(&nb, &num_size);
		ft_print_padding_dec(print_length, modifiers->precision, num_size, '0');
		print_length += ft_print_dec(nb);
	}
	else if (modifiers->minus)
	{	
		print_length += ft_handle_sign_dec(nb, modifiers);
		print_length += ft_handle_negative(&nb, &num_size);
		ft_print_padding_dec(print_length, modifiers->precision, num_size, '0');
		print_length += ft_print_dec(nb);
		ft_print_padding_dec(print_length, modifiers->width - 1, print_length, ' ');
	}
	else
	{
		if ((modifiers->plus && nb > 0) || nb < 0)
			ft_print_padding_dec(print_length, modifiers->width, modifiers->precision + 1, ' ');
		else
			ft_print_padding_dec(print_length, modifiers->width, modifiers->precision, ' ');
		if ((modifiers->plus && nb > 0))
			print_length += ft_print_char('+');
		print_length += ft_handle_negative(&nb, &num_size);
		ft_print_padding_dec(print_length, modifiers->precision, num_size, '0');
		print_length += ft_print_dec(nb);
	}
	return (print_length);
}

int	ft_print_dec_mod(int nb, t_mdf *modifiers)
{
	int	num_size;
	int	print_length;

	if (!ft_validate_flags_dec(modifiers))
		return (ft_use_modifiers(NULL, modifiers));;
	num_size = ft_num_size(nb);
	print_length = 0;
	if (!modifiers->width && !modifiers->precision)
		return (ft_handle_plain_dec(nb, modifiers));
	else if (modifiers->width && !modifiers->precision)
		return (ft_handle_width_only_dec(nb, modifiers));
	else
		return (ft_handle_precision(nb, modifiers));
	return (print_length);
}
