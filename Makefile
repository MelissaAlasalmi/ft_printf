NAME = libftprintf.a

SRCS = 	ft_printf.c \

OBJS =	ft_printf.o \

HEADER = libftprintf.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c -I $(HEADER) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

.PHONY: clean fclean re all

clean:
	rm -f $(OBJS)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
