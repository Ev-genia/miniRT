/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_plane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:47:41 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:46 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	valid_plane(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 6);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 3);
	check_coords(params[0]);
	check_normal_vect(params[1]);
	check_rgb(params[2]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
}
