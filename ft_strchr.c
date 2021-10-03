/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:54:22 by areggie           #+#    #+#             */
/*   Updated: 2020/11/22 18:56:58 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strchr(const char *s, int c)
{
	const unsigned char *string;
	char				chr;
	int					i;

	string = (const unsigned char*)s;
	chr = (char)c;
	i = 0;
	while (string[i])
	{
		if (string[i] == chr)
			return ((char *)&string[i]);
		i++;
	}
	if (chr == '\0')
		return ((char *)&string[i]);
	return (0);
}
