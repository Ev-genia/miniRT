/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:05:40 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:40 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../../libraries/libft/libft.h"

void	exit_error(char *str)
{
	ft_putstr_fd("Error", 1);
	if (str != NULL)
	{
		ft_putstr_fd(". ", 1);
		ft_putstr_fd(str, 1);
	}
	ft_putstr_fd("\n", 1);
	exit(EXIT_FAILURE);
}
