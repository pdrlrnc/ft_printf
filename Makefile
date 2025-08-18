# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 15:46:51 by pedde-so          #+#    #+#              #
#    Updated: 2025/05/25 14:25:14 by pedde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC_FILES = ft_printf ft_printf_char ft_printf_string ft_printf_utils \
			ft_printf_pointer ft_printf_decimal ft_printf_hex \
			ft_printf_unsigned ft_validate_modifiers ft_printf_decimal_utils \
			ft_printf_decimal_main ft_printf_unsigned_utils ft_printf_hex_utils

SRC_DIR   = src/
OBJ_DIR   = obj/
INCLUDES  = include
LIBFT_DIR = libft
LIBFT_URL = https://github.com/pdrlrnc/libft.git

NAME = libftprintf.a

CC     = cc
AR     = ar rcs
RM     = rm -rf
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

OBJ = $(addprefix $(OBJ_DIR)/,$(addsuffix .o,$(SRC_FILES)))
SRC = $(addprefix $(SRC_DIR)/,$(addsuffix .c,$(SRC_FILES)))

all: $(NAME)

$(LIBFT_DIR):
	@git clone --depth 1 $(LIBFT_URL) $(LIBFT_DIR)

$(LIBFT_DIR)/libft.a: | $(LIBFT_DIR)
	@$(MAKE) -s -C $(LIBFT_DIR)
	@$(MAKE) bonus -s -C $(LIBFT_DIR)

$(INCLUDES)/libft.h: $(LIBFT_DIR)/libft.a
	@mkdir -p $(INCLUDES)
	@cp $(LIBFT_DIR)/libft.h $(INCLUDES)/libft.h 2>/dev/null || \
	cp $(LIBFT_DIR)/include/libft.h $(INCLUDES)/libft.h 2>/dev/null || \
	cp $(LIBFT_DIR)/includes/libft.h $(INCLUDES)/libft.h

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES)/libft.h
	@mkdir -p $(OBJ_DIR)
	@$(CC) -g $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a
	@cp $(LIBFT_DIR)/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME) $(INCLUDES)/libft.h
	@$(RM) -r $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
