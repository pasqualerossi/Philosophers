/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_routine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:05:38 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:37:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosophers.h"

void	*philosophers_routine(void *arguments)
{
	t_philo	*philosophers;

	philosophers = (t_philo *)arguments;
	while (philosophers->general->philosopher_dead == 0)
	{
		if (philosopher_is_dead(philosophers))
			return (0);
		philosopher_takes_forks(philosophers);
		if (philosopher_is_dead(philosophers))
		{
			pthread_mutex_unlock(philosophers->left_fork);
			pthread_mutex_unlock(philosophers->right_fork);
			return (0);
		}
		philosophers_is_eating(philosophers);
		if (philosopher_is_dead(philosophers))
			return (0);
		philosophers_is_sleeping(philosophers);
		if (philosopher_is_dead(philosophers))
			return (0);
		philosophers_is_thinking(philosophers);
	}
	return (0);
}

void	join_threads(t_general *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		pthread_join(data->philosophers[i].thread_id, NULL);
		i++;
	}
}

void	begin_philosophers_routine(t_general *data)
{
	int	i;

	i = 0;
	data->starting_time = get_time();
	while (i < data->number_of_philosophers)
	{
		pthread_create(&data->philosophers[i].thread_id,
			NULL, &philosophers_routine, (void *)&data->philosophers[i]);
		i++;
	}
	i = 0;
	while (i < data->number_of_philosophers)
	{
		pthread_join(data->philosophers[i].thread_id, NULL);
		i++;
	}
}
