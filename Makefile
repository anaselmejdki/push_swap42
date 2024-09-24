NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address
AR = ar rc
RM = rm -rf

#Files
FILES = ft_split.c func_pars.c parsing.c push.c reverse_rotate.c rotate.c \
	swap.c sorting.c func_sort.c func2_sort.c func3_sort.c main.c
#bonus files
B_FILES = ./bonus/main_bonus.c ./bonus/ft_split_bonus.c ./bonus/func_pars_bonus.c ./bonus/parsing_bonus.c  ./bonus/get_next_line.c ./bonus/push_bonus.c\
		./bonus/get_next_line_utils.c ./bonus/reverse_rotate_bonus.c ./bonus/read_lines_bonus.c ./bonus/swap_bonus.c ./bonus/rotate_bonus.c ./bonus/func_helper_bonus.c

OBJS = ${FILES:.c=.o}
B_OBJS = ${B_FILES:.c=.o}

all : $(NAME) 

${NAME} : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o  $(NAME)

bonus : $(BONUS)

${BONUS} : $(B_OBJS)
	$(CC) $(CFLAGS) $(B_OBJS) -o $(BONUS)

.o:.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(B_OBJS)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all

.SECONDARY : $(OBJS) $(B_OBJS)
