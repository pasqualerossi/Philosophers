/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_are_characters_check.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:49:54 by prossi            #+#    #+#             */
/*   Updated: 2022/07/08 15:30:40 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/philosophers.h"

int	arguments_outside_limits(char *str)
{
	if (ft_atoi_long(str) > INT_MAX || ft_atoi_long(str) < INT_MIN)
		return (TRUE);
	return (FALSE);
}

int	no_arguments_outside_limits(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (arguments_outside_limits(argv[i]))
			return (FALSE);
	}
	return (TRUE);
}

int	arguments_are_correct(int argc, char **argv)
{
	if (right_amount_of_arguments(argc) && all_arguments_are_numbers(argv))
	{
		if (no_arguments_outside_limits(argv))
			return (TRUE);
		return (print_limits_error(), FALSE);
	}
	return (print_right_syntax(), FALSE);
}

int	right_amount_of_arguments(int argc)
{
	if (argc < 5 || argc > 6)
		return (0);
	else
		return (1);
}
