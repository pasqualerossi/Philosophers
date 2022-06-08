/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:47:20 by prossi            #+#    #+#             */
/*   Updated: 2022/06/08 16:33:54 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/philosophers.h"

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
