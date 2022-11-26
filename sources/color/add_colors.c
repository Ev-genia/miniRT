/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_colors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:10:55 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:32:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"
#include <math.h>

t_color	add_colors(t_color col1, t_color col2)
{
	col2.r = fminf(col2.r + col1.r, 255.0F);
	col2.g = fminf(col2.g + col1.g, 255.0F);
	col2.b = fminf(col2.b + col1.b, 255.0F);
	return (col2);
}
