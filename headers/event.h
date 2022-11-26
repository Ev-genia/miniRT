/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:58:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 17:58:57 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENT_H
# define EVENT_H

# include "minirt.h"
# include "ray.h"

# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3
# define X_EVENT_MOUSE_MOVE		6
# define X_EVENT_EXIT			17
# define X_EVENT_MOUSE_PRESS	4
# define X_EVENT_MOUSE_RELEASE	5

int		phong_raytracing(t_minirt *rt);
int		key_press(int keycode, t_minirt *rt);
int		key_release(int keycode, t_minirt *rt);
int		mouse_hook(int x2, int y2, t_minirt *rt);
int		mouse_press(int button, int x, int y, t_minirt *rt);
int		mouse_release(int button, int x, int y, t_minirt *rt);
void	move_cam(t_cam *cam, t_screen *screen, t_ctrl *controls);

#endif