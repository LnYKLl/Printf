CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c main.c ft_printf_utils.c ft_hexmin.c
OBJ = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME) main

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: main.o $(NAME)
	$(CC) $(CFLAGS) -o main main.o -L. -lftprintf

clean:
	rm -f $(OBJ) main.o main

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re