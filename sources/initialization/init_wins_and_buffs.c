/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_wins_and_buffs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:10:47 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:35:46 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/utils.h"

void	init_window_and_buffers(t_minirt *rt)
{
	rt->phong_rt.ptr = mlx_init();
	if (rt->phong_rt.ptr == NULL)
		exit_error("Cannot initialize mlx");
	rt->phong_rt.win = mlx_new_window(rt->phong_rt.ptr, rt->screen.width, \
												rt->screen.heigth, "miniRT");
	if (rt->phong_rt.win == NULL)
		exit_error("Cannot initialize window");
	rt->buffer.ptr = mlx_new_image(rt->phong_rt.ptr, rt->screen.width, \
															rt->screen.heigth);
	if (rt->buffer.ptr == NULL)
		exit_error("Cannot initialize image");
	rt->buffer.addr = mlx_get_data_addr(rt->buffer.ptr, \
	&rt->buffer.depth, &rt->buffer.len, &rt->buffer.end);
}
