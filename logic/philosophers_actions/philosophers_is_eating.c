/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_is_eating.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:59:52 by prossi            #+#    #+#             */
/*   Updated: 2022/06/07 12:26:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philosophers_is_eating(t_philo *philosophers)
{
	print_message("is eating", philosophers);
	pthread_mutex_lock(&philosophers->general->mutex);
	philosophers->last_meal = get_time() - philosophers->general->starting_time;
	philosophers->time_to_die = philosophers->last_meal + philosophers->general->time_to_die;
	pthread_mutex_unlock(&philosophers->general->mutex);
	ft_sleep(philosophers->general->time_to_eat, philosophers);
	pthread_mutex_lock(&philosophers->general->mutex);
	if (philosophers->number_of_meals != -1)
		philosophers->number_of_meals++;
	pthread_mutex_unlock(&philosophers->general->mutex);
	pthread_mutex_unlock(philosophers->left_fork);
	pthread_mutex_unlock(philosophers->right_fork);
}