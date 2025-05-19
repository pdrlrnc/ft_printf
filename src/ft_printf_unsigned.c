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
	printf("cona cona cona |%u| conaaaaa", nb_ul);
	ft_putnbr_fd(nb_ul, 1);
	return (ft_num_len(nb_ul));
}
