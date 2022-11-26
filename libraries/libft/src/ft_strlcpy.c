/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:22:35 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:24:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while ((i < dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	while (src[i])
		++i;
	return (i);
}
