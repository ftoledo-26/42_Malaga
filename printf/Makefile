CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = \
ft_printf.c \
ft_printf_basicos.c \
ft_printf_hexa.c \
ft_printf_punteros.c \
main.c\



OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	echo "Compilando $<"
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
