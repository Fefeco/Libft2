/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:10:17 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/23 12:35:54 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	ch;
	char	*ret;

	if (!s)
		return (0);
	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * ++len);
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ch = (*f)(i, s[i]);
		ret[i++] = ch;
	}
	ret[i] = 0;
	return (ret);
}
