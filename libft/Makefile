# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 01:44:57 by aabduvak          #+#    #+#              #
#    Updated: 2022/03/02 20:36:16 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)

INCS			= libft.h
NAME			= libft.a
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
LIB				= GNL/get_next_line.a


all : $(LIB) ${NAME}

$(LIB):
	make -C ./GNL

$(NAME) : ${OBJS}
	cp $(LIB) ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o :
	${CC} ${CFLAGS} -c $< -o $@

clean :
	${RM} ${OBJS}

fclean : clean
	make fclean -C ./GNL
	make fclean -C ./ft_printf
	${RM} ${NAME}

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