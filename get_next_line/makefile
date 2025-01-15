CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = get_next_line.a
SRC = \
get_next_line.h \
get_next_line.c \
get_next_line_util.c \

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
