/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:13:54 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/22 10:45:26 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int count, size_t size)
{
	int	*p;
	int	total_size;

	total_size = count * size;
	p = (int *)malloc(total_size);
	if (!p)
		return (p);
	ft_bzero(p, total_size);
	return ((void *)p);
}
