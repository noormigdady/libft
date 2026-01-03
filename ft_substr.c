/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:19:12 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/27 10:56:51 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	actuallength;
	size_t	s_len;
	char	*sub;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		actuallength = 0;
	else
	{
		actuallength = s_len - start;
		if (actuallength > len)
			actuallength = len;
	}
	sub = (char *)malloc(actuallength + 1);
	if (sub == NULL)
		return (NULL);
	if (actuallength > 0)
		ft_strlcpy(sub, s + start, actuallength + 1);
	sub[actuallength] = '\0';
	return (sub);
}
