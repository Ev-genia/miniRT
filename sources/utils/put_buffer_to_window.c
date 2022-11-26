/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_buffer_to_window.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:15:48 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:12 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/utils.h"

void	put_buffer_to_window(t_minirt *rt, t_img *buf)
{
	if (mlx_put_image_to_window(rt->phong_rt.ptr, rt->phong_rt.win, \
																buf->ptr, 0, 0))
		exit_error("Cannot put image to window");
}
