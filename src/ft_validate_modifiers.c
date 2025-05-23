/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_modifiers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:45:10 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/23 15:45:56 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static void	ft_read_flags(char *str, int *old_i, t_modifiers *modifiers)
{
	while (ft_is_flag(*(str + *old_i)))
	{
		if (*(str + *old_i) == '-')
			modifiers->minus = 1;
		else if (*(str + *old_i) == '+')
			modifiers->plus = 1;
		else if (*(str + *old_i) == ' ')
			modifiers->space = 1;
		else if (*(str + *old_i) == '#')
			modifiers->hashtag = 1;
		else if (*(str + *old_i) == '0')
			modifiers->zero = 1;
		(*old_i)++;
	}
}

static t_modifiers	*ft_read_specifier(char *str, int *old_i, t_modifiers *modifiers, int *i)
{
	if (ft_is_specifier(*(str + *old_i)))
	{
		modifiers->specifier = *(str + *old_i);
		modifiers->valid = 1;
		if (ft_validate_modifiers_for_specifier(modifiers))
			*i = *old_i;
		else
			(*i)--;
	}
	return (modifiers);
}

t_modifiers	*ft_validate_modifiers(char *str, int *i, t_modifiers *modifiers)
{
	int	old_i;

	*modifiers = (t_modifiers){0};
	old_i = *i;
	ft_read_flags(str, &old_i, modifiers);
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
	return (ft_read_specifier(str, &old_i, modifiers, i));
}

