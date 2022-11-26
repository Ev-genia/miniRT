/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:44:19 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:33:21 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/event.h"
#include "../../headers/vector.h"

void	move_cam(t_cam *cam, t_screen *screen, t_ctrl *controls)
{
	t_vec	tmp1;
	t_vec	tmp2;

	tmp2 = vec_multiply_nbr(&screen->hor_axis, \
									controls->hor_shift * controls->velocity);
	tmp1 = add_vecs(&cam->coords, &tmp2);
	tmp2 = vec_multiply_nbr(&screen->ver_axis, \
									controls->ver_shift * controls->velocity);
	tmp1 = add_vecs(&tmp1, &tmp2);
	tmp2 = vec_multiply_nbr(&cam->direction, \
										controls->zoom * controls->velocity);
	cam->coords = add_vecs(&tmp1, &tmp2);
	return ;
}
