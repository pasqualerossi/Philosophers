/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:52:37 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 16:40:40 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	print_limits_error(void)
{
	ft_putstr("\nNo arguments - should be above the int limits!\n\n");
}

void	print_right_syntax(void)
{
	ft_putstr("\n./philo[philos][death_time][eating_time][sleeping_time]\n\n");
}
