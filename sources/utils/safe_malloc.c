/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:17:06 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"

void	*safe_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		exit_error("Cannot allocate memory");
	return (ptr);
}
