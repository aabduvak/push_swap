# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:23:46 by aabduvak          #+#    #+#              #
#    Updated: 2022/03/06 15:59:21 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard sources/*.c)
OBJS			= $(SRCS:.c=.o)

NAME			= push_swap
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra
LIB				= ./libft/libft.a
LIST			:= $(shell "ruby" "-e" "puts (-10..489).to_a.shuffle.join(' ')")

INC_FT			= ./libft/sources
INC_GN			= ./libft/GNL/sources
INC_PR			= ./libft/ft_printf/sources
INC				= ./includes

all : $(LIB) ${NAME}

$(LIB):
	make -C ./libft

$(NAME) : ${OBJS}
	$(CC) $(OBJS) -o $(NAME) $(LIB)

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I$(INC_PR) -I$(INC_GN) -I$(INC_FT) -I$(INC)

test: $(NAME)
	bash tester/tester.sh
# $< input files
# $@ output files
# in makefile used to create oputput files in their subfolder

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

ffclean: fclean
	make fclean -C ./libft

norm :
	@norminette libft/
	@norminette sources/*.[ch]

re : fclean all

run : $(NAME)
	@./$(NAME) $(LIST)

check: $(NAME)
	./push_swap $(LIST) | ./checker_Mac $(LIST)

vis: $(NAME)
	cp push_swap push_swap_visualizer/push_swap
	python3 push_swap_visualizer/pyviz.py $(LIST)

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make            --------- compiles all *.c files and create libftprintf.a library"
	@echo "make clean      --------- cleans all *.o files in sources"
	@echo "make fclean 	   --------- cleans all *.o files in sources and libftprintf.a library"
	@echo "make re         --------- cleans all files and compiles again"
	@echo "make norm       --------- controls all *.c and *.h codes to norminette standart"
	@echo "                --------- if finds norminette error will break"

.PHONY: all clean fclean re run test