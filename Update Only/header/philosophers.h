/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:34:45 by prossi            #+#    #+#             */
/*   Updated: 2022/07/07 18:38:30 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H

# define PHILOSOPHERS_H

//DEFINES

# define TRUE 		1
# define SUCCESS	1
# define FALSE		0
# define ERROR		0
# define FAILURE	0

//LIBRARIES

# include <pthread.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>

//STRUCTS

typedef struct s_philo
{
	int					id;
	int					last_meal;
	int					is_eating;
	int					time_to_die;
	int					time_to_sleep;
	int					time_to_eat;
	int					number_of_meals;
	pthread_t			thread_id;
	struct s_general	*general;
	pthread_mutex_t		*left_fork;
	pthread_mutex_t		*right_fork;
}	t_philo;

typedef struct s_general
{
	int				number_of_philosophers;
	int				time_to_die;
	int				time_to_sleep;
	int				time_to_eat;
	int				number_of_meals;
	int				starting_time;
	int				philosopher_dead;
	pthread_mutex_t	*fork_mutex;
	pthread_mutex_t	mutex;
	t_philo			*philosophers;
}	t_general;

//PROTOTYPES - change structure below to what each .c file has in it, instead of folder.

//errors_check folder

void	print_limits_error(void);
void	print_right_syntax(void);

//libft folder

int		ft_atoi(const char *str);
long	ft_atoi_long(const char *str);
char	*ft_itoa(int n);
void	ft_putstr(char *str);
int		ft_strlen(const char *str);

//philosophers_actions folder

int		philosopher_is_dead(t_philo *philosophers);
void	philosophers_is_eating(t_philo *philosophers);
void	philosophers_is_sleeping(t_philo *philosophers);
void	philosophers_is_thinking(t_philo *philosophers);
void	*philosophers_routine(void *arguments);
void	begin_philosophers_routine(t_general *data);
int		philosopher_takes_forks(t_philo *philosophers);

//philosophers_program folder

int		initialise_philosophers(t_general *general);
int		mutex(t_general *general);
void	unlock_philosophers_mutex(t_general *philosophers);
int		structs(t_general *general, char **argv);
int		main(int argc, char **argv);

//philosophers_utils folder

void	print_message(char *str, t_philo *philosopher);
int		get_time(void);
void	ft_sleep(int time, t_philo *philosophers);

//user_arguments_check folder

int		all_arguments_are_numbers(char **argv);
int		arguments_are_correct(int argc, char **argv);
int		arguments_outside_limits(char *str);
int		is_numeric(int count);
int		no_arguments_outside_limits(char **argv);
int		right_amount_of_arguments(int argc);
int		string_is_numeric(char *str);

#endif
