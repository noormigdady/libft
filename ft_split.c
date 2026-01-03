/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:07:29 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/24 10:56:58 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const*s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (counter);
}

static char	**free_all(char**newarray)
{
	int	i;

	i = 0;
	while (newarray[i])
	{
		free(newarray[i]);
		i++;
	}
	free(newarray);
	return (NULL);
}

static size_t	word_length(char const*s, char c)
{
	int	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static char	**fill_array(char const*s, size_t wordsnum, char**result, char c)
{
	size_t	start_index;
	size_t	i;
	size_t	word_len;

	i = 0;
	start_index = 0;
	while (i < wordsnum)
	{
		while (s[start_index] && s[start_index] == c)
			start_index++;
		word_len = word_length(s + start_index, c);
		result[i] = ft_substr(s, start_index, word_len);
		if (!result[i])
			return (free_all(result));
		start_index += word_len;
		i++;
	}
	result[wordsnum] = NULL;
	return (result);
}

char	**ft_split(char const*s, char c)
{
	size_t	wordsnum;
	char	**result;

	if (!s)
		return (NULL);
	wordsnum = word_counter(s, c);
	result = (char **)malloc((wordsnum + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_array(s, wordsnum, result, c));
}
