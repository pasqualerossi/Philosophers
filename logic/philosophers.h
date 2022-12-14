/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:34:45 by prossi            #+#    #+#             */
/*   Updated: 2022/12/14 18:20:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H

# define PHILOSOPHERS_H

# define TRUE 		1
# define SUCCESS	1
# define FALSE		0
# define ERROR		0
# define FAILURE	0

# include <pthread.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>

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
	int					number_of_philosophers;
	int					time_to_die;
	int					time_to_sleep;
	int					time_to_eat;
	int					number_of_meals;
	int					starting_time;
	int					philosopher_dead;
	pthread_mutex_t		*fork_mutex;
	pthread_mutex_t		mutex;
	pthread_mutex_t		*left_fork;
	pthread_mutex_t		*right_fork;
	t_philo				*philosophers;
}	t_general;

void	print_limits_error(void);
void	print_right_syntax(void);
void	philosophers_is_eating(t_philo *philosophers);
void	philosophers_is_sleeping(t_philo *philosophers);
void	philosophers_is_thinking(t_philo *philosophers);
void	*philosophers_routine(void *arguments);
void	begin_philosophers_routine(t_general *data);
void	free_philosophers(t_general *philosophers);
void	*begin_monitoring(void *arg);
void	join_threads(t_general *data);
void	print_message(char *str, t_philo *philosopher);
void	ft_sleep(int time, t_philo *philosophers);

long	ft_atoi_long(const char *str);

int		philosopher_is_dead(t_philo *philosophers);
int		philosopher_takes_forks(t_philo *philosophers);
int		ft_atoi(const char *str);
int		mutex(t_general *general);
int		get_time(void);
int		all_arguments_are_numbers(char **argv);
int		arguments_are_correct(int argc, char **argv);
int		no_arguments_outside_limits(char **argv);
int		right_amount_of_arguments(int argc);
int		string_is_numeric(char *str);

#endif