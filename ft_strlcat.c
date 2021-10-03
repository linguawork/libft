/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:11:02 by areggie           #+#    #+#             */
/*   Updated: 2020/11/22 18:36:25 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d;
	size_t		s;
	int			i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= dstsize)
		return (s + dstsize);
	i = 0;
	while (src[i] && d + i + 1 < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
