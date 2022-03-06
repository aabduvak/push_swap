# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:43:54 by aabduvak          #+#    #+#              #
#    Updated: 2022/03/02 20:37:43 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)
NAME			= get_next_line.a
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
LIB				= libftprintf.a

all : $(LIB) $(NAME)

$(LIB) :
	make -C ../ft_printf	

$(NAME) : $(OBJS)
	cp ../ft_printf/$(LIB) ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

norm :
	norminette sources/*.[ch]

re : fclean all

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make        --------- will compile all *.c files and create libft.a library"
	@echo "make clean  --------- will clean all *.o files in sources"
	@echo "make fclean --------- will clean all *.o files in sources and libft.a library"
	@echo "make re     --------- will clean all files and compiles again"
	@echo "make norm   --------- will control all *.c and *.h codes to norminette standart"
	@echo "            --------- if finds norminette error will break"

.PHONY: all clean fclean re .c.o