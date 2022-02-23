# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 01:44:57 by aabduvak          #+#    #+#              #
#    Updated: 2022/02/16 04:50:22 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)

INCS			= libft.h
NAME			= libft.a
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
LIB_GNL			= GNL/get_next_line.a
LIB_PRINT		= ft_printf/libftprintf.a


all : $(LIB_GNL) $(LIB_PRINT) ${NAME}

$(LIB_GNL):
	make -C ./GNL

$(LIB_PRINT):
	make -C ./ft_printf

$(NAME) : ${OBJS}
	cp $(LIB_GNL) ./$(NAME)
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