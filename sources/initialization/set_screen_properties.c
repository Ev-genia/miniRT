/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_screen_properties.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:50:48 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:36:11 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	set_screen_properties(t_screen *screen, int heigth, int width)
{
	screen->heigth = heigth;
	screen->width = width;
	screen->density = 1.0F / screen->width;
	screen->aspect_ratio = screen->heigth / screen->width;
	ft_strlcpy(&screen->fps.str[0], "FPS ", 5);
	screen->fps.x_pos = width - 50;
	screen->fps.y_pos = 20;
	screen->fps.color = 0x00FFFFFF;
}
