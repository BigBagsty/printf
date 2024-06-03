NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -O0
SRCS = ft_printf.c ft_putnumberB.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C ./libft/
	ar rsc $(NAME) $(OBJS) libft/*.o


all: $(NAME)

libft.a:
	make -C ./libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -f $(OBJS)
	make -C ./libft clean

fclean: clean
	@rm -f $(NAME)
	make -C ./libft fclean

re: fclean all

run:
	cc libftprintf.a && valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out

rerun: re run

gdb:	all
		cc libftprintf.a && gdb --args ./a.out

fcount:
	@VAR1=$$(cat $(SRCS) | wc -l); \
	echo "You have written $$VAR1 lines of code!"
