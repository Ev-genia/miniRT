/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:59:38 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:23:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char	*str)
{
	long	sum;
	long	lsum;
	int		sign;

	sum = 0;
	sign = 1;
	while (((9 <= *str) && (*str <= 13)) || (*str == ' '))
		str++;
	if (*str == '-')
		sign = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while (ft_isdigit(*str))
	{
		lsum = sum;
		sum = 10 * sum + *str - '0';
		if (sum < lsum)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		str++;
	}
	return (sum * sign);
}
