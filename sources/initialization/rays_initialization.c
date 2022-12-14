/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:22:28 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:36:05 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../../headers/validation.h"

void	init_rays(t_minirt *rt)
{
	int	i;
	int	j;

	rt->screen.rays = safe_malloc(sizeof(*rt->screen.rays) * rt->screen.heigth);
	i = 0;
	while (i < rt->screen.heigth)
	{
		rt->screen.rays[i] = safe_malloc(sizeof(**rt->screen.rays) \
															* rt->screen.width);
		j = 0;
		while (j < rt->screen.width)
		{
			rt->screen.rays[i][j] = (t_ray){0};
			j++;
		}
		i++;
	}
}
