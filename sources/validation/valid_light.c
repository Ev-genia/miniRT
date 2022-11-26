/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_light.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:30:53 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:39 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	valid_light(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 4);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 3);
	check_coords(params[0]);
	check_ratio(params[1]);
	check_rgb(params[2]);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
}
