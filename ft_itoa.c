/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 11:41:52 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/27 11:14:50 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_convert(char *s, long long num, int len)
{
	while (num > 0)
	{
		s[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	long long	num;

	len = ft_length(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		num = ((long long)n) * -1;
	}
	else
		num = n;
	s = ft_convert(s, num, len);
	return (s);
}
