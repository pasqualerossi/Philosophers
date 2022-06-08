/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:07:38 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 16:31:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

void	print_message(char *str, t_philo *philosopher)
{
	pthread_mutex_lock(&philosopher->general->mutex);
	printf("%d %d %s\n", get_time()
		- philosopher->general->starting_time, philosopher->id, str);
	pthread_mutex_unlock(&philosopher->general->mutex);
}
