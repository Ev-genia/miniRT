/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit_or_charset.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:03:05 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:40 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/utils.h"
#include "../../headers/validation.h"

void	check_digit_or_charset(char *str, char *charset)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && !ft_strchr(charset, *str))
			exit_error("Invalid input: invalid charset");
		str++;
	}
}
