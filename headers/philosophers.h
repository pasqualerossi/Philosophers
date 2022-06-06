/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosphers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:41:40 by prossi            #+#    #+#             */
/*   Updated: 2022/06/06 18:42:11 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H

# define PHILO_H

//DEFINES

# define TRUE 1
# define SUCCESS 1
# define FALSE 0
# define ERROR 0
# define FAILURE 0

//LIBRARIES

# include <pthread.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>

//STRUCTS





//PROTOTYPES

//errors_check folder
void	print_limits_error(void);
void	print_right_syntax(void);

//libft folder
int		ft_atoi(const char *str);
long	ft_atoi_long(const char *str);
char	*ft_itoa(int n);
void	ft_putstr(char *str);
int		ft_strlen(const char *str);

//philosophers_actions folder


//philosophers_program folder


//philosophers_utils folder
void	print_message(char *str, t_philo *philosopher);
int		get_time(void);
void	ft_sleep(int time, t_philo *philosophers);

//user_arguments_check folder
int		all_arguments_are_numbers(char **argv);
int		arguments_are_correct(int argc, char **argv);
int		arguments_outside_limits(char *str);
int		is_numeric(int count);
int		no_arguments_outside_limits(char **argv);
int		right_amount_of_arguments(int argc);
int		string_is_numeric(char *str);

#endif
