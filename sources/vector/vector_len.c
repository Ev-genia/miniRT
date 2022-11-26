/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:18:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:44:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

#include "../../headers/vector.h"

inline float	vector_len(t_vec *vec)
{
	return (sqrtf(dot_product(*vec, *vec)));
}
