# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brsoares <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 10:09:28 by brsoares          #+#    #+#              #
#    Updated: 2025/01/09 10:09:31 by brsoares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
SRCS		= main.c functions.c utils.c sort.c radix.c ft_atoi_ps.c
OBJS		= $(SRCS:.c=.o)


LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
RM			= rm -f

all:		$(LIBFT) $(NAME)

$(LIBFT):
			@$(MAKE) -C $(LIBFT_DIR)

$(NAME):	$(LIBFT) $(OBJS) 
			$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)
			@$(MAKE) clean -C $(LIBFT_DIR)

fclean:		clean
			$(RM) $(NAME)
			@$(MAKE) fclean -C $(LIBFT_DIR)

re:		fclean all

.PHONY:		all clean fclean re
