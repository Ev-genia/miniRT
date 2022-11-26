/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_reflect_vec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:59:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

t_vec	reflect_vec(t_vec ray, t_vec norm)
{
	float	kof;
	t_vec	reflect;

	kof = 2.0F * ((ray.x * norm.x) + (ray.y * norm.y) + (ray.z * norm.z)) / \
	((norm.x * norm.x) + (norm.y * norm.y) + (norm.z * norm.z));
	reflect.x = ray.x - kof * norm.x;
	reflect.y = ray.y - kof * norm.y;
	reflect.z = ray.z - kof * norm.z;
	return (reflect);
}
