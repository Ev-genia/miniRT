/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtract_vecs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:16:11 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:44:09 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	subtract_vecs(t_vec *vec1, t_vec *vec2)
{
	return ((t_vec){vec1->x - vec2->x, vec1->y - vec2->y, vec1->z - vec2->z});
}