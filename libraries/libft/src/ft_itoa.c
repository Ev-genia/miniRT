/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:06:10 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:21:25 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	size_t	dlen(int n)
{
	size_t	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = dlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1 + (n < 0)));
	if (str == NULL)
		return (str);
	str[len + (n < 0)] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		str[len - 1 + (n < 0)] = (char)((1 - 2 * (n < 0)) * (n % 10) + 48);
		n = n / 10;
		len--;
	}
	return (str);
}
