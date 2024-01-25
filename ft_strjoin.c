/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:49:22 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/17 21:09:51 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;
	int		s1len;

	s1len = ft_strlen(s1);
	len = s1len + ft_strlen(s2);
	if (len < 1)
		len = 0;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	ft_strlcpy(ptr, s1, s1len + 1);
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}
