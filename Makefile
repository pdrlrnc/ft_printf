# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 15:46:51 by pedde-so          #+#    #+#              #
#    Updated: 2025/05/15 15:46:44 by pedde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES		= ft_printf ft_printf_char ft_printf_utils
LIBFT			= libft
OBJ_DIR			= obj/
INCLUDES		= ./include
SRC_DIR			= src/
AR			= ar rcs
NAME			= libftprintf.a
MAIN			= main.out

DEF_COLOUR = \033[0;39m
GREEN = \033[0;92m
BLUE = \033[0;94m
WHITE = \033[0;97m
MAGENTA = \033[0;95m

OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
CC			= cc
RM			= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I$(INCLUDES)

OBJF			= .cache_exists

$(OBJF):
			@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) -c $< -o $@


all:			$(NAME)


$(NAME):		$(OBJ)
				@make -s -C $(LIBFT)
				@$(AR) $(NAME) $(OBJ) ./libft/libft.a
				@echo "$(GREEN)Congratulations! You've compiled ft_printf!$(DEF_COLOUR)"

clean:
				@$(RM) $(OBJ)
				@$(RM) $(OBJ_DIR)
				@$(RM) $(MAIN)
				@make clean -s -C $(LIBFT)

fclean:			clean
				@$(RM) $(NAME)
				@make fclean -s -C $(LIBFT)
				@echo "$(BLUE)Cleaning done! Not a library in sight!$(DEF_COLOUR)"


re:				fclean all
				@echo "$(WHITE)Cleaned and rebuilt everything. Good job!$(DEF_COLOUR)"

main:				re	
				@$(CC) $(CFLAGS) ./main/main.c -L. -lftprintf -o $(MAIN)
				@echo "$(MAGENTA)Main compiled. Get ready GDB!$(DEF_COLOUR)"
.PHONY:			all clean fclean re main
