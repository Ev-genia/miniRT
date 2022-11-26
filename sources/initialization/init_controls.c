/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:34:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:35:36 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/initialization.h"

void	init_controls(t_minirt *rt)
{
	rt->controls = (t_ctrl){0, 0, 0, 1.0F, 0, 0, 0, 0};
	rt->insert_mode = 0;
}
