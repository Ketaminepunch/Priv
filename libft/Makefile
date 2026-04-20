NAME		= libft.a

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc

SRC_DIR		= src
SRCS		= $(SRC_DIR)/ft_bzero.c \
			  $(SRC_DIR)/ft_is.c \
			  $(SRC_DIR)/ft_mem.c \
			  $(SRC_DIR)/ft_str.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS) 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.DEFAULT_GOAL := all
