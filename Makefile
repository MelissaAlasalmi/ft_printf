# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/09 14:26:10 by malasalm          #+#    #+#              #
#    Updated: 2020/08/25 07:28:29 by Melissa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/ft_printf.c \
	   srcs/format_to_struct.c \
	   srcs/initialize_struct.c \
	   srcs/output.c \
	   srcs/output_helpers.c \
	   srcs/conversions.c \
	   srcs/types/type_c.c \
	   srcs/types/type_s.c \
	   srcs/types/type_p.c \
	   srcs/types/type_d.c \
	   srcs/types/type_i.c \
	   srcs/types/type_o.c \
	   srcs/types/type_u.c \
	   srcs/types/type_lowerx.c \
	   srcs/types/type_upperx.c \
	   srcs/types/type_f.c \
	   srcs/types/type_b.c \
	   srcs/ft_ftoa.c \

	   
OBJS = ft_printf.o \
	   format_to_struct.o \
	   initialize_struct.o \
	   output.o \
	   output_helpers.o \
	   conversions.o \
	   type_c.o \
	   type_s.o \
	   type_p.o \
	   type_d.o \
	   type_i.o \
	   type_o.o \
	   type_u.o \
	   type_lowerx.o \
	   type_upperx.o \
	   type_f.o \
	   type_b.o \
	   ft_ftoa.o \

HEADER = ft_printf.h

INCS = -I libft/libft.h -I ft_printf.h

CFLAGS = -g -Wall -Wextra -Werror

LIB = -L libft -lft

MAINC = srcs/main.c

MAINO = main.o

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(CFLAGS) -c $(SRCS) $(INCS)
	@ar rc $(NAME) *.o ./libft/*.o
	@ranlib $(NAME)
	@gcc $(CFLAGS) -c $(MAINC) $(SRCS) $(INCS)
	@gcc $(INCS) $(MAINO) $(OBJS) $(LIB) -o ft_printf
	@mkdir objs 
	@mv $(OBJS) $(MAINO) objs

.PHONY: clean fclean re all

clean:
	rm -rf objs
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
