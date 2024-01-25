/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:30:28 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/25 19:18:50 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ret;

	if (!s1 || !set || !*s1 || !*set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
		++start;
	while (ft_strchr(set, s1[end - 1]) && (end - 1) > start)
		--end;
	ret = (char *)malloc(sizeof(char) * ((end + 1) - start));
	if (!ret)
		return (ret);
	ft_strlcpy(ret, s1 + start, ((end + 1) - start));
	return (ret);
}
