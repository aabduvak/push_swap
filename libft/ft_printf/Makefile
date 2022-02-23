# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 17:06:01 by aabduvak          #+#    #+#              #
#    Updated: 2022/01/21 21:30:19 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard sources/*.c)
OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 


all :  ${NAME}

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o : 
	${CC} ${CFLAGS} -c $< -o $@ 

# $< input files
# $@ output files
# in makefile used to create oputput files in their subfolder

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette sources/*.[ch]

re : fclean all

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make            --------- compiles all *.c files and create libftprintf.a library"
	@echo "make bonus      --------- compiles all bonus functions and create libftprintf.a library"
	@echo "make clean      --------- cleans all *.o files in sources"
	@echo "make fclean 	   --------- cleans all *.o files in sources and libftprintf.a library"
	@echo "make re         --------- cleans all files and compiles again"
	@echo "make norm       --------- controls all *.c and *.h codes to norminette standart"
	@echo "                --------- if finds norminette error will break"

.PHONY: all clean fclean re .c.o bonus