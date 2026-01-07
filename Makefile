NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

SRC = ft_printf.c ft_charprint.c ft_hexprint.c ft_nbrprint.c ft_itoa.c ft_calloc.c ft_bzero.c \
ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re