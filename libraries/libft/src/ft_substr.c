/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:51:57 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/14 14:25:08 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sel;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len <= slen - start)
		sel = len + 1;
	if (len > slen - start)
		sel = slen - start + 1;
	if (start >= slen)
		sel = 1;
	sub = (char *)malloc(sizeof(char) * sel);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sel - 1)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
