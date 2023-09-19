/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:02:13 by akaraban          #+#    #+#             */
/*   Updated: 2023/09/18 17:40:15 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	check_argc(int argc)
{
	if (argc < 5)
	{
		error_msg("Too little arguments!");
		exit(1);
	}
	if (argc > 6)
	{
		error_msg("Too many arguments!");
		exit(1);
	}
}

int	check_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != 0)
	{
		if (is_numeric_string(argv[i]) == 1 || ft_atoi(argv[i]) == -1)
		{
			error_msg("Invalid arguments!");
			return (1);
		}
		i++;
	}
	return (0);
}