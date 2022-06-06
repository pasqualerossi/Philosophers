/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_limits_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:52:37 by prossi            #+#    #+#             */
/*   Updated: 2022/06/06 14:28:46 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_limits_error(void)
{
	ft_putstr("\nNo arguments - should be above the int limits!\n");
}

void	print_right_syntax(void)
{
	ft_putstr("\nError - please use the following in this order: [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep]\n");
}