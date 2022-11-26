/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specular.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:32:47 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/ray.h"
#include "../../headers/parsing.h"

void	add_specular_component(t_ray **rays, t_screen *screen, t_scene *sc)
{
	register int	i;
	register int	j;
	t_color			specular;

	i = 0;
	while (i < screen->heigth)
	{
		j = 0;
		while (j < screen->width)
		{
			if (rays[i][j].collis.surface != NULL \
										&& rays[i][j].collis.surf_type != BULB)
			{
				specular = current_ray_specular(&rays[i][j], sc);
				rays[i][j].color = add_colors(rays[i][j].color, specular);
			}
			++j;
		}
		++i;
	}
}
