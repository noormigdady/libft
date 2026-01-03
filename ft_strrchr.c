/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:22:58 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/10 15:33:37 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = (char *)s + (ft_strlen(s) - 1);
	i = ft_strlen(s);
	while (i--)
	{
		if (*last == (char)c)
			return ((char *)last);
		last--;
	}
	return (NULL);
}
