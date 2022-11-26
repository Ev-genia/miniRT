/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_minirt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:55:00 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:35:52 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	initialize_raytracing(t_minirt *rt)
{
	init_window_and_buffers(rt);
	init_controls(rt);
	init_pixels(rt);
	init_rays(rt);
	init_scene(rt);
}
