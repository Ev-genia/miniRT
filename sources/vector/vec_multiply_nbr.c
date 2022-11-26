/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_multiply_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:36:17 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:44:19 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	vec_multiply_nbr(t_vec *vec, float nbr)
{
	return ((t_vec){vec->x * nbr, vec->y * nbr, vec->z * nbr});
}
