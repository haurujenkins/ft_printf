NAME = libftprintf.a
SRC = char_print.c ft_printf.c str_print.c \
int_print.c hex_print.c uint_print.c hex_lower_print.c \
ft_strchr.c hex_upper_print.c ft_strlen.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

%.o : %.c ft_printf.h 
	$(CC) -c $< -o $@ $(FLAGS)

$(NAME) : $(OBJ) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libftprintf.a

re : fclean all

.PHONY:		all clean fclean re bonus