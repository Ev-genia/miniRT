/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ambient.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:44:37 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:36:38 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

void	parse_ambient(char *line, t_scene *scene)
{
	char	**params;

	params = ft_split(line, ' ');
	parse_rgb_light(params[1], &scene->ambient, ft_atof(params[0]));
	free(params[0]);
	free(params[1]);
	free(params);
}
