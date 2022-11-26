/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_product.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:55:59 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:19 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline float	dot_product(t_vec vec1, t_vec vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z);
}
