/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:05:09 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 17:59:14 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <stdio.h>

# include "scene.h"
# include "screen.h"
# include "controls.h"
# include "../libraries/libmlx/headers/mlx.h"

typedef struct s_ctrl	t_ctrl;
typedef struct s_scene	t_scene;
typedef struct s_screen	t_screen;

typedef struct s_minirt
{
	int			insert_mode;
	t_mlx		phong_rt;
	t_img		buffer;
	t_scene		scene;
	t_ctrl		controls;
	t_screen	screen;
}	t_minirt;

#endif