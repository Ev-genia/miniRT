/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hadam_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:52:29 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:46 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

t_vec	hadam_product(t_vec v1, t_vec v2)
{
	v1.x *= v2.x;
	v1.y *= v2.y;
	v1.z *= v2.z;
	return (v1);
}