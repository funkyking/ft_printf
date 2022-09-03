HEADER_FILE = ft_printf.h
SRCS		= ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS		= $(SRCS:.c=.o)
AR			= ar rcs
NAME		= libftprintf.a

CC      = gcc
CFLAGS  = -g -Wall -Wextra -Werror
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	gcc -Wall -g -Wextra -Werror -c $(SRCS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all
