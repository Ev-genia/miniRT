/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_screen_axes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:07:08 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:09 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

inline void	find_screen_axes(t_screen *screen, t_vec *direction)
{
	screen->hor_axis = find_normal_hor(direction);
	screen->ver_axis = find_normal_ver(direction);
}
