/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diffuse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:32:14 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:20 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/utils.h"
#include "../../headers/parsing.h"

void	add_diffuse_component(t_ray **rays, t_screen *screen, t_scene *sc)
{
	register int	i;
	register int	j;
	t_color			diffuse;

	i = 0;
	while (i < screen->heigth)
	{
		j = 0;
		while (j < screen->width)
		{
			if (rays[i][j].collis.surface != NULL \
										&& rays[i][j].collis.surf_type != BULB)
			{
				diffuse = current_ray_diffuse(&rays[i][j], sc);
				rays[i][j].color = add_colors(rays[i][j].color, diffuse);
			}
			++j;
		}
		++i;
	}
}
