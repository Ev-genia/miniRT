/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:23:36 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:21:49 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	++n;
	while (--n)
		((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
	return (dest);
}
