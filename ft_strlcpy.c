/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:44:12 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/25 11:09:50 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int	src_len;

	src_len = 0;
	if (dst_size && dst_size > 0)
	{
		while (*src && dst_size > 1)
		{
			*dst++ = *src++;
			++src_len;
			--dst_size;
		}
		*dst = '\0';
	}
	while (*src++)
		++src_len;
	return (src_len);
}
