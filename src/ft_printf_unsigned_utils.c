/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:43:58 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/27 22:39:06 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include "../include/libft.h"

int	ft_add_p_u(int i, int max, char c)
{
	int	pr_l;

	pr_l = 0;
	while (i++ < max)
		pr_l += ft_print_char(c);
	return (pr_l);
}

int	ft_validate_flags_uns(t_mdf *mdf)
{
	if (mdf->plus || mdf->space || mdf->hashtag)
		mdf->valid = 0;
	if (mdf->dot && mdf->zero)
		mdf->zero = 0;
	return (mdf->valid);
}
