/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_are_numbers_check.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:47:50 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 18:40:37 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

int	is_numeric(int count)
{
	if (count >= 48 && count <= 57)
		return (TRUE);
	else
		return (FALSE);
}

int	string_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (is_numeric(str[i]) == FALSE)
			return (FALSE);
	}
	return (TRUE);
}

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
