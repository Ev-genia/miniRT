/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam_to_pix_vec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:23:56 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:38:58 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

t_vec	cam_to_pix_vec(t_cam *cam, t_pix *pix_coords, t_screen *screen)
{
	t_vec	hor_axis;
	t_vec	ver_axis;
	t_vec	sum;

	hor_axis = vec_multiply_nbr(&screen->hor_axis, pix_coords->x);
	ver_axis = vec_multiply_nbr(&screen->ver_axis, pix_coords->y);
	sum = vec_multiply_nbr(&cam->direction, cam->focal);
	sum = add_vecs(&sum, &hor_axis);
	sum = add_vecs(&sum, &ver_axis);
	return (sum);
}
