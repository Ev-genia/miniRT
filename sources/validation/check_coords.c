/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:21:44 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:35 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	check_coords(char *coords)
{
	char	**xyz;

	xyz = ft_split(coords, ',');
	check_num_of_fields(xyz, 3);
	check_digit_or_charset(xyz[0] + 1, ".");
	check_digit_or_charset(xyz[1] + 1, ".");
	check_digit_or_charset(xyz[2] + 1, ".");
	if (count_char(xyz[0], '.') > 1
		|| count_char(xyz[1], '.') > 1
		|| count_char(xyz[2], '.') > 1)
		exit_error("Invalid input: invalid vector format");
	free(xyz[0]);
	free(xyz[1]);
	free(xyz[2]);
	free(xyz);
}
