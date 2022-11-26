/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_ambient.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:08:09 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:23 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/validation.h"

void	valid_ambient(char *line)
{
	char	**params;

	check_digit_or_charset(line, " .,-");
	check_num_of_char(line, ',', 2);
	params = ft_split(line, ' ');
	check_num_of_fields(params, 2);
	check_ratio(params[0]);
	check_rgb(params[1]);
	free(params[0]);
	free(params[1]);
	free(params);
}
