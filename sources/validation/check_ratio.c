/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ratio.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:43:48 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

void	check_ratio(char *line)
{
	float	ratio;

	check_digit_or_charset(line, ".");
	if (count_char(line, '.') > 1)
		exit_error("Invalid input: invalid ratio");
	ratio = ft_atof(line);
	if (ratio > 1.0F)
		exit_error("Invalid input: invalid ratio (must be positive)");
}
