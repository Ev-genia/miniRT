/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:46:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:15 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/screen.h"

void	my_mlx_pixel_put(t_img *pic, int x, int y, unsigned int color)
{
	char	*dst;

	dst = pic->addr + (y * pic->len + x * (pic->depth / 8));
	*(unsigned int *)dst = color;
}
