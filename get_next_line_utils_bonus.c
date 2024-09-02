/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:29:09 by fvargas           #+#    #+#             */
/*   Updated: 2024/08/14 15:22:18 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	k;
	size_t	j;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	k = 0;
	j = ldst;
	if (ldst < size)
	{
		while (src[k] && (ldst + k) < (size - 1))
		{
			dst[j] = src[k];
			k++;
			j++;
		}
		dst[j] = '\0';
	}
	else
		return (size + lsrc);
	return (ldst + lsrc);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	n;
	char	*c;

	if (nmemb > 0)
	{
		if (SIZE_MAX / nmemb < size)
			return (0);
	}
	p = (void *)malloc(nmemb * size);
	if (!p)
		return (0);
	c = (char *)p;
	n = 0;
	while (n < nmemb * size)
	{
		*c = 0;
		c++;
		n++;
	}
	return (p);
}

char	*ft_join(char *stash, char *buffer)
{
	char	*join;
	size_t	s;
	size_t	b;

	s = ft_strlen(stash);
	b = ft_strlen(buffer);
	join = (char *)malloc((s + b + 1) * sizeof(char));
	if (!join)
	{
		free(stash);
		return (0);
	}
	join[0] = '\0';
	ft_strlcat(join, stash, s + 1);
	ft_strlcat(join, buffer, s + b + 1);
	free(stash);
	return (join);
}
