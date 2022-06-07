/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_routine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:05:38 by prossi            #+#    #+#             */
/*   Updated: 2022/06/07 14:51:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*philosophers_routine(void *arguments)
{
	t_philo	*philosophers;

	philosophers = (t_philo *)arguments;
	while (philosophers->general->is_dead == 0)
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
		philo_is_sleeping(philosophers);
		if (philosopher_is_dead(philosophers))
			return (0);
		philosophers_is_thinking(philosophers);
	}
	return (0);
}

void	begin_philosophers_routine(t_general *data)
{

}