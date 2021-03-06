# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 18:23:08 by adeburea          #+#    #+#              #
#    Updated: 2021/04/08 14:15:04 by adeburea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang
ASM = nasm
NAME = libasm.a
CFLAGS = -Wall -Wextra -Werror -g -fsannitize=address
AFLAGS = -felf64
SRCS =			ft_strlen.s \
				ft_strcpy.s \
				ft_strcmp.s \
				ft_write.s \
				ft_read.s \
				ft_strdup.s
OBJS = 			${SRCS:.s=.o}

.s.o:
	${ASM} ${AFLAGS} -s $< -o ${<:.s=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}
	${CC} main.c ${NAME}
	./a.out

clean:
	rm -f a.out
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
