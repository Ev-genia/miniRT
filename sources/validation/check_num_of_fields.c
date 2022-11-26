/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_of_fields.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:17:25 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:58 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "../../headers/utils.h"

void	check_num_of_fields(char **split, int num)
{
	int	count;

	if (split == NULL)
		exit_error("ft_split error");
	count = 0;
	while (*split)
	{
		split++;
		count++;
	}
	if (count != num)
		exit_error("Invalid input: invalid number of parameters in line");
}
