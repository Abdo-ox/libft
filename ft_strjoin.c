/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:30:07 by ajari             #+#    #+#             */
/*   Updated: 2022/10/31 15:29:34 by ajari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_m(char const *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sub;
	size_t	l_total;
	size_t	i;
	size_t	j;

	l_total = ft_strlen_m(s1) + ft_strlen_m(s2);
	sub = malloc(l_total + 1);
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		sub[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		sub[i + j] = s2[j];
		j++;
	}
	sub[j + i] = '\0';
	return (sub);
}
