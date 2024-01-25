/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:48:43 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/23 14:06:38 by fedeito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ulen;

	i = 0;
	ulen = (unsigned int)len;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < ulen)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < ulen
			&& haystack[i + j] && needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
