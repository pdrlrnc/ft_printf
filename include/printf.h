/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:56 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/15 16:43:42 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define UINT_MAX 4294967295

typedef struct s_modifiers
{
	int	minus;
	int	zero;
	int	hashtag;
	int	space;
	int	plus;
	int	width;
	int	precision;
	int	dot;
	char	specifier;
	int	valid;
}		t_modifiers;

int	ft_printf(const char *str, ...);
int	ft_print_arguments(va_list args, char *str, int *i);
int	ft_use_modifiers(va_list args, t_modifiers *modifiers);
t_modifiers	*ft_validate_modifiers(char *str, int *i, t_modifiers *modifiers);
int	ft_validate_modifiers_for_specifier(t_modifiers *modifiers);
int	ft_is_flag(char c);
int	ft_is_specifier(char c);
int	ft_print_char(char c);
int	ft_validate_flags_char(t_modifiers *modifiers);
int	ft_print_char_mod(char c, t_modifiers *modifiers);
int	ft_add_padding_char(int i, int max);
int	ft_print_str(char *str);
int	ft_print_str_mod(char *str, t_modifiers *modifiers);
int	ft_print_ptr(void *ptr);
int	ft_validate_flags_ptr(t_modifiers *modifiers);
int	ft_print_ptr_mod(void *ptr, t_modifiers *modifiers);
int	ft_print_dec(int nb);
int	ft_print_dec_mod(int nb, t_modifiers *modifiers);
int	ft_validate_flags_dec(t_modifiers *modifiers);
int	ft_print_hex(int nb, char ccase);
int	ft_print_hex_mod_precision(int nb, char ccase, t_modifiers *modifiers, int num_len);
int	ft_print_hex_mod_width(int nb, char ccase, t_modifiers *modifiers, int num_len);
int	ft_print_hex_mod(int nb, char ccase, t_modifiers *modifiers);
int	ft_print_hex_mod_width_and_precision(int nb, char ccase, t_modifiers *modifiers, int num_len);
int	ft_print_hasthag_hex(char ccase);
int	ft_print_padding_hex(int i, int max, char c);
int	ft_validate_flags_hex(t_modifiers *modifiers);
int	ft_print_unsigned(int nb);
int	ft_validate_flags_uns(t_modifiers *modifiers);
int	ft_print_uns_mod(int nb, t_modifiers *modifiers);
int	ft_print_uns_mod_width_and_precision(unsigned int nb_ul, t_modifiers *modifiers);
int	ft_add_padding_uns(int i, int max, char c);
int	ft_print_padding(int print_length, int max, int i, char c);

#endif
