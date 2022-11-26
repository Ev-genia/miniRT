/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:46:03 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:37:00 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_coords(char *line, t_vec *vec)
{
	char	**xyz;

	xyz = ft_split(line, ',');
	vec->x = ft_atof(xyz[0]);
	vec->y = ft_atof(xyz[1]);
	vec->z = ft_atof(xyz[2]);
	if (vec->z == 1.0F)
	{
		vec->x = 0;
		vec->y = 0.00174533;
		vec->z = 0.999998;
	}
	free(xyz[0]);
	free(xyz[1]);
	free(xyz[2]);
	free(xyz);
}
