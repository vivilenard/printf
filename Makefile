CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_utoa.c
OBJS = $(SRC:.c=.o)
LIBFT_PATH = ./libft/
NAME = libftprintf.a

all: compilelibft $(NAME) 
$(NAME) : $(OBJS) 
		ar rcs $(NAME) $(OBJS) $(LIBFT_PATH)*.o
compilelibft:
	make -C libft
c: all
		$(CC) $(NAME) main.c && ./a.out
n:
		norminette $(SRC)
clean :
		rm -f $(OBJS) $(LIBFT_PATH)*.o
fclean : clean
		rm -f $(NAME) $(LIBFT_PATH)libft.a
re : fclean
		$(MAKE) all
.PHONY: all,n, clean, fclean, re