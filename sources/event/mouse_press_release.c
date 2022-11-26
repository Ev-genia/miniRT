/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_press_release.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:16:23 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:33:12 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/event.h"

int	mouse_press(int button, int x, int y, t_minirt *rt)
{
	if (button != 1)
		return (0);
	if (y < 0 || y > rt->screen.heigth || x < 0 || x > rt->screen.width)
		return (0);
	mlx_mouse_hide();
	rt->controls.mouse_press = 1;
	rt->controls.motion++;
	return (0);
}

int	mouse_release(int button, int x, int y, t_minirt *rt)
{
	(void)x;
	(void)y;
	if (button != 1)
		return (0);
	mlx_mouse_show();
	rt->controls.motion--;
	rt->controls.mouse_press = 0;
	return (0);
}
