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

int	ft_validate_flags_dec(t_modifiers *modifiers)
{
	if (modifiers->zero && modifiers->minus)
		modifiers->valid = 0;
	if (modifiers->plus && modifiers->space)
		modifiers->valid = 0;
	if (modifiers->hashtag)
		modifiers->valid = 0;
	return (modifiers->valid);

}

int	ft_print_dec_mod(int nb, t_modifiers *modifiers)
{
	int	num_size;
	int	print_length;

	if (!ft_validate_flags_dec(modifiers))
		return (ft_use_modifiers(NULL, modifiers));;
	num_size = ft_num_size(nb);
	print_length = 0;
	if (!modifiers->width && !modifiers->precision)
	{
		if (nb <= 0)
			print_length += ft_print_dec(nb);
		else if (modifiers->plus)
			print_length += (ft_print_char('+') + ft_print_dec(nb));
		else if (modifiers->space)
			print_length += (ft_print_char(' ') + ft_print_dec(nb));
		else
			print_length += ft_print_dec(nb);
	}
	else if (modifiers->width && !modifiers->precision)
	{
		if (modifiers->width <= num_size)
			return (modifiers->width = 0, ft_print_dec_mod(nb, modifiers));
		else if (modifiers->minus)
		{
			if (modifiers->plus && nb > 0)
				print_length += ft_print_char('+');
			if (modifiers->space && nb > 0)
				print_length += ft_print_char(' ');
			print_length += ft_print_dec(nb);
			print_length = ft_print_padding(print_length, print_length, modifiers->width, ' ');
		} 
		else
		{
			if (modifiers->zero)
			{
				if (modifiers->plus && nb > 0)
				{
					print_length += ft_print_char('+');
					num_size++;
				}
				if (modifiers->space && nb > 0)
				{
					print_length += ft_print_char(' ');
					num_size++;
				}
				else if (nb < 0)
				{
					print_length += ft_print_char('-');
					nb = nb * (-1);
				}
				print_length = ft_print_padding(print_length, modifiers->width, num_size , '0');
				print_length += ft_print_dec(nb);
			} 
			else
			{
				if ((modifiers->plus || modifiers->space) && nb > 0)
					num_size++;
				print_length = ft_print_padding(print_length, modifiers->width, num_size ,' ');
				if (modifiers->plus && nb > 0)
					print_length += ft_print_char('+');
				if (modifiers->space && nb > 0)
					print_length += ft_print_char(' ');
				print_length += ft_print_dec(nb);
			}
		}
	}
	else 
	{
		if (modifiers->width <= modifiers->precision)
		{
			if (modifiers->plus && nb > 0)
			{
				print_length += ft_print_char('+');
			}
			if (modifiers->space && nb > 0)
			{
				print_length += ft_print_char(' ');
			}
			if (nb < 0)
			{
				print_length += ft_print_char('-');
				num_size--;
				nb = nb * (-1);
			}
			while (num_size < modifiers->precision--)
				print_length += ft_print_char('0');
			print_length += ft_print_dec(nb);
		}
		else if (modifiers->minus)
		{
			if (modifiers->plus && nb > 0)
				print_length += ft_print_char('+');
			else if (modifiers->space && nb >= 0)
				print_length += ft_print_char(' ');
			else if (nb < 0)
			{
				print_length += ft_print_char('-');
				nb *= -1;
				num_size--;
			}
			while (num_size < modifiers->precision--)
				print_length += ft_print_char('0');
			print_length += ft_print_dec(nb);
			while (print_length < modifiers->width)
				print_length += ft_print_char(' ');
		}
		else
		{
			if ((modifiers->plus && nb > 0) || nb < 0)
				while (modifiers->precision + 1 < modifiers->width--)
					print_length += ft_print_char(' ');
			else
				while (modifiers->precision < modifiers-> width--)
					print_length += ft_print_char(' ');
			if ((modifiers->plus && nb > 0))
				print_length += ft_print_char('+');
			if (nb < 0)
			{
				print_length += ft_print_char('-');
				num_size--;
				nb = nb * (-1);
			}
			while (num_size++ < modifiers->precision)
				print_length += ft_print_char('0');
			print_length += ft_print_dec(nb);
		}
	}
	return (print_length);
}

int	ft_print_padding(int print_length, int max, int i, char c)
{
	while (i < max)
	{
		print_length += ft_print_char(c);
		i++;
	}
	return (print_length);
}
