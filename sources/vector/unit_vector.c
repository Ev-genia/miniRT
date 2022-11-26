/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_vector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:19:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:44:14 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	unit_vector(t_vec vec)
{
	float	norm;

	norm = 1.0F / vector_len(&vec);
	return ((t_vec){vec.x * norm, vec.y * norm, vec.z * norm});
}
