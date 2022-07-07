/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_structs_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:57:08 by prossi            #+#    #+#             */
/*   Updated: 2022/07/07 18:32:38 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

int	initialise_philosophers(t_general *general)
{
	int	i;

	i = 0;
	general->philosophers = malloc(sizeof(t_philo)
			* general->number_of_philosophers);
	if (!general->philosophers)
		return (FAILURE);
	while (i < general->number_of_philosophers)
	{
		general->philosophers[i].id = i + 1;
		general->philosophers[i].left_fork = &general->fork_mutex[i];
		general->philosophers[i].right_fork = &general->fork_mutex[(i + 1)
			% general->number_of_philosophers];
		general->philosophers[i].general = general;
		general->philosophers[i].time_to_die = general->time_to_die;
		general->philosophers[i].time_to_eat = general->time_to_eat;
		general->philosophers[i].time_to_sleep = general->time_to_sleep;
		general->philosophers[i].last_meal = 0;
		general->philosophers[i].is_eating = 0;
		general->philosophers[i].number_of_meals = 0;
		i++;
	}
	return (SUCCESS);
}

int	mutex(t_general *general)
{
	int	i;

	i = -1;
	general->fork_mutex
		= malloc(sizeof(pthread_mutex_t) * general->number_of_philosophers);
	if (!general->fork_mutex)
		return (FAILURE);
	while (++i < general->number_of_philosophers)
		pthread_mutex_init(&general->fork_mutex[i], NULL);
	pthread_mutex_init(&general->mutex, NULL);
	return (SUCCESS);
}

void	unlock_philosophers_mutex(t_general *philosophers)
{
	pthread_mutex_unlock(philosophers->left_fork);
	pthread_mutex_unlock(philosophers->right_fork);
}

int	structs(t_general *general, char **argv)
{
	general->number_of_philosophers = ft_atoi(argv[1]);
	general->time_to_die = ft_atoi(argv[2]);
	general->time_to_eat = ft_atoi(argv[3]);
	general->time_to_sleep = ft_atoi(argv[4]);
	if (argv[5])
		general->number_of_meals = ft_atoi(argv[5]);
	else
		general->number_of_meals = -1;
	general->philosopher_dead = 0;
	if (mutex(general) == FAILURE)
		return (FAILURE);
	if (initialise_philosophers(general) == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_general	general;

	if (arguments_are_correct(argc, argv))
	{
		if (structs(&general, argv))
		{
			begin_philosophers_routine(&general);
			//fix this code to match with this project
			//begin_mentoring
			//join_threads
			//free_philos 
		}
	}
}
