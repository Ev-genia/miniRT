/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_to_vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:20:22 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:32:28 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"

t_color	color_to_vec(unsigned int color)
{
	t_color		pix;

	pix.r = color / 0x010000;
	color = color - pix.r;
	pix.g = color / 0x000100;
	pix.b = color - pix.g;
	return (pix);
}
