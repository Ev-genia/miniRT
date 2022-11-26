/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:10:57 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:23:52 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	while (dif == 0 && (s1[i] != 0 || s2[i] != 0))
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		++i;
	}
	return (dif);
}
