/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cylinder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:27:27 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:37:05 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"
#include "../../headers/minirt.h"

void	parse_cylinder(char *line, t_scene *scene)
{
	static int	num;
	char		**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->cylinders[num].center);
	parse_coords(params[1], &scene->cylinders[num].axis);
	scene->cylinders[num].radius = ft_atof(params[2]) / 2.0F;
	scene->cylinders[num].semi_heigth = ft_atof(params[3]) / 2.0F;
	parse_rgb_object(params[4], &scene->cylinders[num].color);
	get_rot_matrix(scene->cylinders[num].rot, scene->cylinders[num].axis);
	get_rev_matrix(scene->cylinders[num].rev, scene->cylinders[num].rot);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params[3]);
	free(params[4]);
	free(params);
	num++;
}
