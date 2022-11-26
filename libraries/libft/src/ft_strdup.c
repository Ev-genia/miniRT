/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:15:23 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:23:56 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	lens;

	lens = ft_strlen(s1);
	ptr = malloc(lens + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[lens] = '\0';
	ft_strlcpy(ptr, s1, lens + 1);
	return (ptr);
}
