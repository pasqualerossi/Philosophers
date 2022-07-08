NAME = philo

CC = gcc

FLAGS = -Wall -Wextra -Werror -Iheaders

SOURCES = ./logic/errors_check/errors_check.c \
		  ./logic/libft/libft.c \
		  ./logic/philosophers_actions/philosopher_actions.c \
		  ./logic/philosophers_actions/philosopher_monitoring.c \
		  ./logic/philosophers_actions/philosophers_routine.c \
		  ./logic/philosophers_program/mutex_structs_main.c \
		  ./logic/philosophers_utils/philosophers_message_and_time.c \
		  ./logic/user_arguments_check/arguments_are_characters_check.c \
		  ./logic/user_arguments_check/arguments_are_numbers_check.c \

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