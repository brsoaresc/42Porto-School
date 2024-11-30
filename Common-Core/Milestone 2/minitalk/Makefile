SRCS_SERVER	= server.c
SRCS_CLIENT	= client.c
OBJS_SERVER	= $(SRCS_SERVER:.c=.o)
OBJS_CLIENT	= $(SRCS_CLIENT:.c=.o)
SERVER		= server
CLIENT		= client

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f

all:		$(LIBFT) $(SERVER) $(CLIENT)

$(LIBFT):
		@$(MAKE) -C $(LIBFT_DIR)

$(SERVER):	$(OBJS_SERVER) $(LIBFT)
		$(CC) $(CFLAGS) $^ -o $(SERVER)

$(CLIENT):	$(OBJS_CLIENT) $(LIBFT)
		$(CC) $(CFLAGS) $^ -o $(CLIENT)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)
		@$(MAKE) clean -C $(LIBFT_DIR)

fclean:		clean
		$(RM) $(SERVER) $(CLIENT)
		@$(MAKE) fclean -C $(LIBFT_DIR)

re:		fclean all

.PHONY:		all clean fclean re
