/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_cylinder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:58:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:33 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

static void	check_positive_float(char *line)
{
	check_digit_or_charset(line, ".");
	if (count_char(line, '.') > 1)
		exit_error("Invalid input: cylinder: invalid charset");
}

void	valid_cylinder(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 6);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 5);
	check_coords(params[0]);
	check_normal_vect(params[1]);
	check_positive_float(params[2]);
	check_positive_float(params[3]);
	check_rgb(params[4]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params[3]);
	free(params[4]);
	free(params);
}
