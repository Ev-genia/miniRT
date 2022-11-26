/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emit_rays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:30:36 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/ray.h"

void	emit_rays(t_screen *screen, t_cam *cam, int heigth, int width)
{
	register int	j;
	register int	i;
	t_vec			tmp;

	i = 0;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			tmp = cam_to_pix_vec(cam, &screen->pixels[i][j], screen);
			screen->rays[i][j].origin = add_vecs(&cam->coords, &tmp);
			screen->rays[i][j].coords = unit_vector(tmp);
			++j;
		}
		++i;
	}
}
