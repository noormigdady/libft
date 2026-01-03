/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:54:35 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/20 11:03:53 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (dup != NULL)
	{
		while (i < len)
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
