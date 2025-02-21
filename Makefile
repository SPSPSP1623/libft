CC = cc
CFLAGS = -Wall -Wextra -Werror


RM = rm -rf

NAME = libft.a

LIBC = $(shell ls *.c)

SRCS = ${LIBC}
OBJS = ${SRCS:.c=.o}

SRCS_ALL = ${LIBC}
OBJS_ALL = ${SRCS_ALL:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: ${OBJS_ALL}
	ar rcs $(NAME) $(OBJS_ALL)

%.o: %.c
		$(CC) $(CFLAGS) -I includes/ -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
