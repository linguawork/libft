/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 22:26:28 by areggie           #+#    #+#             */
/*   Updated: 2020/11/24 17:50:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordsinside(char const *s, char c)
{
	int	i;
	int	count;

	if (s[0] == '\0')
		return (0);
	count = 0;
	if (s[0] != c)
		count++;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	wordlength(const char *s, char c)
{
	int len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static void	freespace(char ***str, int a)
{
	while (a > 0)
	{
		free((*str)[a]);
		a--;
	}
	free(*str);
	*str = NULL;
}

char		**ft_split(char const *s, char c)
{
	char	**output;
	int		word_number;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	word_number = wordsinside(s, c);
	output = (char**)malloc(sizeof(char*) * (word_number + 1));
	if (output == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_number)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (!(output[i] = ft_substr(s, j, wordlength(s + j, c))))
			freespace(&output, i - 1);
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	output[i] = NULL;
	return (output);
}
