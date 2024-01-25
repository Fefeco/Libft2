/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:50:10 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/22 10:14:25 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int n, size_t len)
{
	int				i;
	unsigned char	c;
	char			*p;

	i = 0;
	c = (unsigned char)n;
	p = b;
	while (i < (int)len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
