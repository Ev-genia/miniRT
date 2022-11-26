/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num_of_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:30:01 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:54 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"

void	check_num_of_char(char *str, char ch, int num)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == ch)
			++count;
		str++;
	}
	if (count != num)
		exit_error("Invalid input: invalid number of char in line");
}
