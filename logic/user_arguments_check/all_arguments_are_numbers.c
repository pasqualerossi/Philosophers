/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_arguments_are_numbers.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:47:50 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 16:34:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

int	all_arguments_are_numbers(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (string_is_numeric(argv[i]))
			;
		else
			return (FALSE);
	}
	return (TRUE);
}
