/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:25:49 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:24:58 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	while (c >= 0)
		c = c - 256;
	c = c + 256;
	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if ((*s == '\0') && (c == '\0'))
		return ((char *)s);
	return (ptr);
}
