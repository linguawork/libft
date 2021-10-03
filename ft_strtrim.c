/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:21:34 by areggie           #+#    #+#             */
/*   Updated: 2020/11/23 20:17:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		right;
	char	*nova;
	int		left;
	int		len;

	left = 0;
	if (!s1 || !set)
		return (NULL);
	right = ft_strlen(s1);
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	while (right && ft_strchr(set, s1[right - 1]))
		right--;
	len = right - left < 0 ? 0 : right - left;
	if ((!(nova = malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	nova[len] = '\0';
	right = 0;
	while (right < len)
	{
		nova[right] = s1[left];
		right++;
		left++;
	}
	return (nova);
}
