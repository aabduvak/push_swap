# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:23:46 by aabduvak          #+#    #+#              #
#    Updated: 2022/02/23 03:18:50 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)

NAME			= checker
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

LIB				= ./libft/libft.a

INC_FT			= ./libft/sources
INC_GN			= ./libft/GNL/sources
INC_PR			= ./libft/ft_printf/sources
INC				= ./includes
LIB_PRINT		= ./libft/ft_printf/libftprintf.a

all : $(LIB) ${NAME}

$(LIB):
	make -C ./libft

$(NAME) : ${OBJS}
	$(CC) $(OBJS) -framework OpenGL -framework AppKit -o $(NAME) $(LIB_PRINT) $(LIB)

.c.o :
	${CC} ${CFLAGS} -c $< -o $@ -I$(INC_PR) -I$(INC_GN) -I$(INC_FT) -I$(INC)

# $< input files
# $@ output files
# in makefile used to create oputput files in their subfolder

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

ffclean: fclean
	make fclean -C ./libft

run :
	@./$(NAME)

norm :
	@norminette libft/
	@norminette sources/*.[ch]

re : fclean all

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make            --------- compiles all *.c files and create libftprintf.a library"
	@echo "make clean      --------- cleans all *.o files in sources"
	@echo "make fclean 	   --------- cleans all *.o files in sources and libftprintf.a library"
	@echo "make re         --------- cleans all files and compiles again"
	@echo "make norm       --------- controls all *.c and *.h codes to norminette standart"
	@echo "                --------- if finds norminette error will break"

.PHONY: all clean fclean re .c.o 