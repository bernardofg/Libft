NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -rf
AR = ar src
SRC =	ft_atoi.c \
		ft_bezero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all