/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_time_ms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:32:46 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:39:35 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>

long int	current_time_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}
