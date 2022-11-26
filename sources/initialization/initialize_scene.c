/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_scene.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:06:39 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:35:58 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	init_scene(t_minirt *rt)
{
	int	i;

	rt->scene.bulb_size = 0.5;
	rt->scene.norm_coef = 900;
	i = 0;
	while (i < rt->scene.num_of.spheres)
	{
		if (rt->scene.spheres[i].type == BULB)
			rt->scene.spheres[i].radius = rt->scene.bulb_size;
		i++;
	}
}
