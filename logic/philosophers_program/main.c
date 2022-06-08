/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:40:24 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 16:30:40 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

int	main(int argc, char **argv)
{
	t_general	general;

	if (arguments_are_correct(argc, argv))
	{
		if (structs(&general, argv))
		{
			begin_philosophers_routine(&general);
		}
	}
}
