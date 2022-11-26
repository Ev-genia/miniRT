/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_normal_ver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:30:10 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:32 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	find_normal_ver(t_vec *vec)
{
	t_vec	var;

	var.x = vec->x * vec->z;
	var.y = vec->y * vec->z;
	var.z = -(vec->x * vec->x + vec->y * vec->y);
	return (unit_vector(var));
}
