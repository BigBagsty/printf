NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -O0
SRCS = ft_bzero.c ft_isascii.c ft_memset.c ft_strlcpy.c ft_tolower.c ft_isalnum.c \
		ft_isdigit.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_toupper.c ft_isalpha.c ft_isprint.c \
		ft_memmove.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJ = $(SRCS_BONUS:.c=.o)

$(NAME): $(OBJS)
	ar rsc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
	ar rsc $< $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run:
	cc libft.a && valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out

rerun: re run

gdb:	all
		cc libft.a && gdb --args ./a.out

fcount:
	@VAR1=$$(cat $(SRCS) | wc -l); \
	VAR2=$$(cat $(SRCS_BONUS) | wc -l); \
	VAR3=$$((VAR1 + VAR2)); \
	echo "You have written $$VAR3 lines of code!"
