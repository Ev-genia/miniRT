/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:46:07 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 17:59:06 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZATION_H
# define INITIALIZATION_H

# include "minirt.h"
# include "utils.h"
# include "../libraries/libft/libft.h"
# define BULB 1

void	initialize_raytracing(t_minirt *minirt);
void	set_screen_properties(t_screen *screen, int heigth, int width);
void	init_window_and_buffers(t_minirt *rt);
void	init_pixels(t_minirt *rt);
void	init_rays(t_minirt *rt);
void	init_controls(t_minirt *rt);
void	init_scene(t_minirt *rt);

#endif