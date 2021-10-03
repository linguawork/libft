/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:55:03 by areggie           #+#    #+#             */
/*   Updated: 2021/04/09 20:12:52 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mem_alloc(size_t howmany, size_t howlarge)
{
	char	*str;

	str = malloc(howmany * howlarge);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (!(ft_mem_alloc(count, size)))
		return (NULL);
	else
		str = ft_mem_alloc(count, size);
	ft_bzero(str, count * size);
	return (str);
}
