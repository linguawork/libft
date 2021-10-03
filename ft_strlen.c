/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:12:25 by areggie           #+#    #+#             */
/*   Updated: 2020/11/22 17:34:57 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t						ft_strlen(const char *s)
{
	const unsigned char		*string;
	int						b;

	string = (const unsigned char *)s;
	b = 0;
	while (string[b] != '\0')
	{
		b++;
	}
	return (b);
}
