NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES = ./logic/errors_check/errors_check.c \
		  ./logic/libft/ft_atoi.c \
		  ./logic/libft/ft_itoa.c \
		  ./logic/libft/ft_putstr.c \
		  ./logic/libft/ft_strlen.c \
		  ./logic/philosophers_actions/philosopher_is_dead.c \
		  ./logic/philosophers_actions/philosophers_is_eating.c \
		  ./logic/philosophers_actions/philosophers_is_sleeping.c \
		  ./logic/philosophers_actions/philosophers_is_thinking.c \
		  ./logic/philosophers_actions/philosophers_routine.c \
		  ./logic/philosophers_actions/philosophers_takes_forks.c \
		  ./logic/philosophers_program/main.c \
		  ./logic/philosophers_program/mutex.c \
		  ./logic/philosophers_program/philosophers.c \
		  ./logic/philosophers_program/structs.c \
		  ./logic/philosophers_utils/philosophers_message.c \
		  ./logic/philosophers_utils/philosophers_time.c \
		  ./logic/user_arguments_check/all_arguments_are_numbers.c \
		  ./logic/user_arguments_check/arguments_are_correct.c \
		  ./logic/user_arguments_check/arguments_outside_limits.c \
		  ./logic/user_arguments_check/is_numeric.c \
		  ./logic/user_arguments_check/no_arguments_outside_limits.c \
		  ./logic/user_arguments_check/riht_amount_of_arguments.c \
		  ./logic/user_arguments_check/string_is_numeric.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o
	@echo "cleaning the .o files"

fclean: clean
	@rm -rf $(NAME)

re: fclean all
