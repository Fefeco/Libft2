/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:23:20 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/22 10:11:01 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	ch;
	unsigned char	*p;

	ch = (unsigned char)c;
	p = (unsigned char *)s;
	while (size--)
		if (*p++ == ch)
			return (--p);
	return (0);
}
