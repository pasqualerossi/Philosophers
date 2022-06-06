/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_arguments_outside_limits.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:49:24 by prossi            #+#    #+#             */
/*   Updated: 2022/06/06 18:41:28 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

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
