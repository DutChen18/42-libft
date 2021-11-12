SRC=\
	ft_atoi.c 		ft_bzero.c 		ft_calloc.c 	ft_isalnum.c	\
	ft_isalpha.c 	ft_isascii.c 	ft_isdigit.c 	ft_isprint.c	\
	ft_itoa.c 		ft_memchr.c 	ft_memcmp.c 	ft_memcpy.c		\
	ft_memmove.c 	ft_memset.c 	ft_putchar_fd.c	ft_putendl_fd.c	\
	ft_putnbr_fd.c 	ft_putstr_fd.c 	ft_split.c 		ft_strchr.c		\
	ft_strdup.c 	ft_striteri.c 	ft_strjoin.c 	ft_strlcat.c	\
	ft_strlcpy.c 	ft_strlen.c 	ft_strmapi.c 	ft_strncmp.c	\
	ft_strnstr.c 	ft_strrchr.c 	ft_strtrim.c 	ft_substr.c		\
	ft_tolower.c 	ft_toupper.c
SRC_BONUS=\
	ft_lstadd_back_bonus.c 	ft_lstadd_front_bonus.c	\
	ft_lstclear_bonus.c 	ft_lstdelone_bonus.c	\
	ft_lstiter_bonus.c 		ft_lstlast_bonus.c		\
	ft_lstmap_bonus.c 		ft_lstnew_bonus.c		\
	ft_lstsize_bonus.c
INC=\
	libft.h
OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)
CFLAGS=-Wall -Wextra -Werror -DFT_SAFE=1 -ansi -pedantic
NAME=libft.a

$(NAME): $(INC) $(OBJ) $(NAME)($(OBJ))
re: fclean all
all: $(NAME)
bonus: $(NAME) $(OBJ_BONUS) $(NAME)($(OBJ_BONUS))

$(NAME)(%.o): %.o
	ar rcs $(NAME) $<

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

%.o: %.c $(INC)
	$(CC) -c $(CFLAGS) -o $@ $<

norm:
	norminette $(SRC) $(SRC_BONUS) $(INC)

test: bonus
	if [ ! -d ~/goinfre/test42 ]; then git clone https://github.com/DutChen18/test42 ~/goinfre/test42; fi
	python3 ~/goinfre/test42/libft.py run $(shell pwd)
