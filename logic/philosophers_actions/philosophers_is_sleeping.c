/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_is_sleeping.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:00:26 by prossi            #+#    #+#             */
/*   Updated: 2022/06/07 12:21:13 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philosophers_is_sleeping(t_philo *philosophers)
{
	print_message("is sleeping", philosophers);
	ft_sleep(philosophers->general->time_to_sleep, philosophers);
}