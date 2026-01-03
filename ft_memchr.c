/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:09:24 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/10 15:24:08 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const char *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return (s);
		i++;
		s++;
	}
	return (NULL);
}
