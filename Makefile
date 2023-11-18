NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_putsmallhexa.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_putcaphexa.c ft_putxadrr.c to_check1.c to_check2.c ft_case.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${NAME} ${OBJ}

re: fclean all

.PHONY: fclean all  clean re