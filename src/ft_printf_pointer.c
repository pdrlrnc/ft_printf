/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:35:45 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/16 10:35:49 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	ptr_address;
	int			nbr_size;

	nbr_size = 0;
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ptr_address = (unsigned long) ptr;
	ft_putstr_fd("0x", 1);
	nbr_size = ft_putnbr_base_fd(ptr_address, "0123456789abcdef", 1); 
	return (nbr_size + 2);
}
