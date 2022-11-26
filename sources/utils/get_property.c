/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_property.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:18:01 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:08 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/utils.h"
#include "../../libraries/libft/libft.h"

int	get_property(t_minirt *rt)
{
	char	*line;

	write(1, "insert command\n", 15);
	line = get_next_line(0);
	if (line && ft_strcmp(line, "cam\n") == 0)
		printf("cam position: %f,%f,%f\ncam direction: %f,%f,%f\n", \
		rt->scene.cam.coords.x, rt->scene.cam.coords.y, \
		rt->scene.cam.coords.z, \
		rt->scene.cam.direction.x, rt->scene.cam.direction.y, \
		rt->scene.cam.direction.z);
	free(line);
	write(1, "done\n", 5);
	return (0);
}
