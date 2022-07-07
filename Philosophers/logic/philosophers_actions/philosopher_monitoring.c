/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_monitoring.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:18:09 by prossi            #+#    #+#             */
/*   Updated: 2022/07/07 18:38:38 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

//fix this code below to match with this project

/*
int	check_last_meal(t_philo *philo)
{
	if (get_time() - philo->general->starting_time > philo->time_to_die)
	{
		philo->general->is_dead = 1;
		printf(BRED"%d %d died\n"CRESET, get_time()
			- philo->general->starting_time, philo->id);
		return (0);
	}
	else
		return (1);
}

int	check_if_one_is_dead(t_general *general)
{
	int	i;

	i = 0;
	while (i < general->number_of_philo)
	{
		if (check_last_meal(&general->philos[i]) == ERROR)
			return (ERROR);
		i++;
	}
	return (1);
}
*/

void	free_philosophers(t_general *philosophers)
{
	free(general->philosophers);
	free(general->fork_mutex);
}

//fix this code below to match with this project

/* 
void	*begin_monitoring(void *arg)
{
	t_general	*data;

	data = (t_general *)arg;
	while (1)
	{
		pthread_mutex_lock(&data->mutex);
		if (check_if_one_is_dead(data) == ERROR)
		{
			usleep(100);
			return (pthread_mutex_unlock(&data->mutex), NULL);
		}
		pthread_mutex_unlock(&data->mutex);
		usleep(200);
	}
}
*/