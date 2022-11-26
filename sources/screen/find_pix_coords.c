/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pix_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:36:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

t_pix	find_pix_coords(int i, int j, t_screen *screen)
{
	t_pix	var;

	var.x = (2.0 * screen->density * (float)j) + screen->density - 1.0;
	var.y = (2.0 * screen->density * (float)i) \
									+ screen->density - screen->aspect_ratio;
	return (var);
}
