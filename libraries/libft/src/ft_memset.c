/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:23:55 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:22:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	void	*ptr;

	ptr = dest;
	while (count)
	{
		*((unsigned char *)dest) = ch;
		++dest;
		--count;
	}
	return (ptr);
}
