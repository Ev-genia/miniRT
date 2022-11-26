/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mix_colors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:04:49 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:32:34 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/color.h"

inline t_color	mix_colors(t_color *koef, t_color *base)
{
	return ((t_color){base->r * koef->r, base->g * koef->g, base->b * koef->b});
}
