/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mix_product.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:17:00 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:44:01 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline float	mix_product(t_vec *vec1, t_vec *vec2, t_vec *vec3)
{
	t_vec	tmp;

	tmp = cross_product(vec2, vec3);
	return (dot_product(*vec1, tmp));
}
