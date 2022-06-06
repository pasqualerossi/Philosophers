/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:07:38 by prossi            #+#    #+#             */
/*   Updated: 2022/06/06 15:17:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_message(char *str, t_philo *philosopher)
{
	pthread_mutex_lock(&philosopher->general->mutex);
	printf("%d %d %s\n", get_time() philosopher->general->starting_time, philosopher->id, str);
	pthread_mutex_unlock(&philo->general->mutex);
}
