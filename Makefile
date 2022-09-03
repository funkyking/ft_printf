SRCS =	ft_printf.c \
		ft_printchar.c \
		ft_functions.c \
		ft_print_ptr.c \
		ft_print_unsigned.c \
		ft_print_hex.c \

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/
INCLUDE = libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH) $(INCLUDE)
	cp $(LIBFT_PATH)$(INCLUDE) $(NAME)
	ar -rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)$(INCLUDE)

re: fclean all

.PHONY: include all clean fclean re