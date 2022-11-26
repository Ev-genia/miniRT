/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorize_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:52:41 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:07 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/ray.h"

void	colorize_buffer(t_img *buffer, t_ray **rays, t_screen *screen)
{
	register int	i;
	register int	j;

	i = 0;
	while (i < screen->heigth)
	{
		j = 0;
		while (j < screen->width)
		{
			my_mlx_pixel_put(buffer, j, i, vec_to_color(&rays[i][j].color));
			++j;
		}
		++i;
	}
}
