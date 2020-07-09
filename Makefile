# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/09 14:26:10 by malasalm          #+#    #+#              #
#    Updated: 2020/07/09 19:15:37 by malasalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   format_to_struct.c \
	   initialize_struct.c \
	   test_struct.c \
	   output.c \
	   output_helpers.c \
	   width_precision_len.c \
	   types/type_c.c \
	   types/type_s.c \
	   types/type_p.c \
	   types/type_d.c \
	   types/type_i.c \
	   types/type_o.c \
	   types/type_u.c \
	   types/type_lowerx.c \
	   types/type_upperX.c \
	   types/type_f.c \
	   
OBJS = ft_printf.o \
	   format_to_struct.o \
	   initialize_struct.o \
	   test_struct.o \
	   output.o \
	   output_helpers.o \
	   width_precision_len.o \
	   type_c.o \
	   type_s.o \
	   type_p.o \
	   type_d.o \
	   type_i.o \
	   type_o.o \
	   type_u.o \
	   type_lowerx.o \
	   type_upperX.o \
	   type_f.o \

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
	rm -f $(OBJS) $(MAINO)

exe:
	make -C libft
	gcc $(CFLAGS) -c $(MAINC) $(SRCS) $(INCS)
	gcc $(CFLAGS) $(INCS) $(MAINO) $(OBJS) $(LIB) -o $(NAME)
	rm -f $(OBJS) $(MAINO)

.PHONY: clean fclean re all

clean:
	rm -f $(OBJS) $(MAINO)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
