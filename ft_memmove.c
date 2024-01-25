/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:30:47 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/22 10:13:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (src < dst)
	{
		while ((int)len - i > 0)
		{
			++i;
			*(d + ((int)len - i)) = *(s + ((int)len - i));
		}
	}
	if (src > dst)
	{
		while (i < (int)len)
		{
			d[i] = s[i];
			++i;
		}
	}
	return (dst);
}
