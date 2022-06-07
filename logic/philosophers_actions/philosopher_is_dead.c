/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_is_dead.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:02:10 by prossi            #+#    #+#             */
/*   Updated: 2022/06/07 12:22:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosopher_is_dead(t_philo *philosophers)
{
	pthread_mutex_lock(&philosophers->general->mutex);
	if (philosophers->general->is_dead == 1)
	{
		pthread_mutex_unlock(&philosophers->general->mutex);
		return (1);
	}
	pthread_mutex_unlock(&philosophers->general->mutex);
	return (0);
}