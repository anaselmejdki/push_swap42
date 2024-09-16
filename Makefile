NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

#Files
FILES = ft_split.c func_pars.c parsing.c push.c reverse_rotate.c rotate.c \
	swap.c sorting.c func_sort.c test.c

OBJS = ${FILES:.c=.o}

all : $(NAME)

${NAME} : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o  $(NAME)

.o:.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.SECONDARY : $(OBJS)