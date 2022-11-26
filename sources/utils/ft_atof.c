/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:23:02 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:51 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libraries/libft/libft.h"

double	ft_atof(const char *str)
{
	double	a;
	int		e;
	char	*sign;

	a = 0.0;
	e = 0;
	sign = (char *)str;
	if (*str == '-')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
		a = a * 10.0 + (*str++ - '0');
	if (*str != '.' && *sign != '-')
		return (a);
	if (*str != '.' && *sign == '-')
		return (-a);
	while ((*str++ != '\0') && ft_isdigit(*str))
	{
		a = a * 10.0 + (*str - '0');
		e -= 1;
	}
	while (e++ < 0)
		a *= 0.1;
	if (*sign == '-')
		return (-a);
	return (a);
}
