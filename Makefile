CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = 	
OBJS = $(SRC:.c=.o)
NAME = printf.a

all: $(NAME) 
$(NAME) : $(OBJS) 
		ar rcs $(NAME) $(OBJS) 
c: all
		$(CC) libft.a printf.a main.c && ./a.out
n:
		norminette $(SRC)
clean :
		rm -f $(OBJS)
fclean : clean
		rm -f $(NAME)
re : fclean
		$(MAKE) all
.PHONY: all,n, clean, fclean, re