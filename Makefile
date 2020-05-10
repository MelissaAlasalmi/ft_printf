NAME = libftprintf.a

SRCS = 	main.c ft_printf.c flags_to_struct.c initialize.c type_to_struct.c teststruct.c output.c\

OBJS =	main.o ft_printf.o flags_to_struct.o initialize.o type_to_struct.o teststruct.o output.o\

HEADER = ft_printf.h

INCS = -I libft/libft.h -I ft_printf.h

CFLAGS = -Wall -Wextra -Werror

LIB = -L libft -lft

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(CFLAGS) -c $(SRCS) $(INCS)
	gcc $(CFLAGS) $(INCS) $(OBJS) $(LIB) -o $(NAME)

.PHONY: clean fclean re all

clean:
	rm -f $(OBJS)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
