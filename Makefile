NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES = ./logic/philosophers_actions/philosopher_actions.c \
		  ./logic/philosophers_actions/philosopher_monitoring.c \
		  ./logic/philosophers_actions/philosophers_routine.c \
		  ./logic/philosophers_utils/utils_2.c \
		  ./logic/philosophers_utils/utils.c \
		  ./logic/user_arguments_check/arguments_are_characters_check.c \
		  ./logic/user_arguments_check/arguments_are_numbers_check.c \
		  ./logic/main.c

all:
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

fclean: 
	@rm -rf $(NAME)

re: fclean all