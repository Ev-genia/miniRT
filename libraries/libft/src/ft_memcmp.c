/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:03:46 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:21:42 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				s;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	s = 0;
	while ((i < n) && !s)
	{
		s = (int)(str1[i] - str2[i]);
		i++;
	}
	return (s);
}
