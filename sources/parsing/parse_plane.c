/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_plane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:57:03 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:37:17 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_plane(char *line, t_scene *scene)
{
	static int	num;
	char		**params;

	params = ft_split(line, ' ');
	parse_coords(params[0], &scene->planes[num].coords);
	parse_coords(params[1], &scene->planes[num].normal);
	parse_rgb_object(params[2], &scene->planes[num].color);
	free(params[0]);
	free(params[1]);
	free(params[2]);
	free(params);
	num++;
}
