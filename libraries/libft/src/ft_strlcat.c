/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:50 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:24:13 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = 0;
	while (dest[destlen] && destlen < destsize)
		destlen++;
	if (destlen == destsize)
		return (srclen + destsize);
	i = 0;
	while ((destlen + i + 1 < destsize) && src[i])
	{
		dest[destlen + i] = src[i];
		++i;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}
