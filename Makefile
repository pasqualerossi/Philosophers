NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES = ./sources/philosophers_actions/*.c \
		  ./sources/philosophers_utils/*.c \
		  ./sources/user_arguments_check/*.c \
		  ./sources/main.c

all:
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

fclean: 
	@rm -rf $(NAME)

re: fclean all