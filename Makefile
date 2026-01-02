NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

AR = ar rcs

SRC = prova.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	$(MAKE) -c $(LIBFT_DIR)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re