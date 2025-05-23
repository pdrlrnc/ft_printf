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
