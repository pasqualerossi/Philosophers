/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_takes_forks.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:59:21 by prossi            #+#    #+#             */
/*   Updated: 2022/06/07 12:19:56 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosopher_takes_forks(t_philo *philosophers)
{
	if (philo->id % 2 == 0)
		pthread_mutex_lock(philosophers->right_fork);
	else
		pthread_mutex_lock(philosophers->left_fork);
	print_message("has taken a fork", philosophers);
	if (philo->id % 2 == 0)
	{
		if (pthread_mutex_lock(philosophers->left_fork) != 0)
		{
			pthread_mutex_unlock(philosophers->right_fork);
			return (1);
		}
		print_message("has taken a fork", philosophers);
	}
	else
	{
		if (pthread_mutex_lock(philosophers->right_fork) != 0)
		{
			pthread_mutex_unlock(philosophers->left_fork);
			return (1);
		}
		print_message("has taken a fork", philosophers);
	}
	return (0);
}