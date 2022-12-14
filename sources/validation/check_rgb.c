/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rgb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:55:26 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:09 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

static void	check_components_all_digit(char **rgb)
{
	char	*color;

	while (*rgb)
	{
		color = *rgb;
		while (*color)
		{
			if (!ft_isdigit(*color))
				exit_error("Invalid input: invalid color format");
			color++;
		}
		rgb++;
	}
}

static void	check_components_limit(char **rgb)
{
	char	*color;

	while (*rgb)
	{
		color = *rgb;
		while (*color == '0')
			color++;
		if (ft_strlen(color) > 3 || ft_atoi(color) > 255)
			exit_error("Invalid input: invalid color format");
		rgb++;
	}
}

void	check_rgb(char *line)
{
	char	**rgb;

	check_num_of_char(line, ',', 2);
	rgb = ft_split(line, ',');
	check_num_of_fields(rgb, 3);
	check_components_all_digit(rgb);
	check_components_limit(rgb);
	free(rgb[0]);
	free(rgb[1]);
	free(rgb[2]);
	free(rgb);
}
