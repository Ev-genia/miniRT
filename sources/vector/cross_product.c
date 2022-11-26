/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:17:02 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:14 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	cross_product(t_vec *vec1, t_vec *vec2)
{
	t_vec	prod;

	prod.x = -vec1->y * vec2->z + vec1->z * vec2->y;
	prod.y = -vec1->z * vec2->x + vec1->x * vec2->z;
	prod.z = -vec1->x * vec2->y + vec1->y * vec2->x;
	return (prod);
}
