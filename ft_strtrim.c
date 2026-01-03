/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:49:06 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/24 10:59:24 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	flen;
	size_t	start;
	size_t	end;
	char	*new;

	if (!set || !s1)
		return (NULL);
	start = 0;
	while (ft_check(s1[start], (char *)set) && s1[start])
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_check(s1[end], (char *)set) && start <= end)
		end--;
	flen = end - start + 1;
	new = (char *)malloc(flen + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s1 + start, flen);
	new[flen] = '\0';
	return (new);
}
