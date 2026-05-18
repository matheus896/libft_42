NAME = libft.a

SRC = ft_strlen.c ft_isalpha.c

OBJ = $(SRC:.c=.o)
AR = ar rcs
RM = rm -f

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_isalpha.c

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re