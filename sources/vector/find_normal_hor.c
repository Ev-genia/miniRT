/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_normal_hor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:23:46 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:43:26 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/vector.h"

inline t_vec	find_normal_hor(t_vec *vec)
{
	t_vec	tmp;

	tmp = (t_vec){vec->y, -vec->x, 0};
	return (unit_vector(tmp));
}
