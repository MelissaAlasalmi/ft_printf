NAME = libftprintf.a

SRCS = ft_printf.c \
	   format_specifiers_to_struct.c \
	   initialize.c \
	   teststruct.c \
	   output.c \
	   types_cspdi.c \
	   types_ouxXf.c \
	   width_precision_len.c \

OBJS = ft_printf.o \
	   format_specifiers_to_struct.o \
	   initialize.o \
	   teststruct.o \
	   output.o \
	   types_cspdi.o \
	   types_ouxXf.o \
	   width_precision_len.o \

HEADER = ft_printf.h

INCS = -I libft/libft.h -I ft_printf.h

CFLAGS = -g -Wall -Wextra -Werror

LIB = -L libft -lft

MAINC = main.c

MAINO = main.o

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(CFLAGS) -c $(SRCS) $(INCS)
	ar rc $(NAME) *.o ./libft/*.o
	ranlib $(NAME)

exe:
	make -C libft
	gcc $(CFLAGS) -c $(MAINC) $(SRCS) $(INCS)
	gcc $(CFLAGS) $(INCS) $(MAINO) $(OBJS) $(LIB) -o $(NAME)

.PHONY: clean fclean re all

clean:
	rm -f $(OBJS) $(MAINO)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
