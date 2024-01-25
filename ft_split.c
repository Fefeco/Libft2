/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:14:59 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/25 10:25:21 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free_arrays(char **ret, int i)
{
	while (i != 0)
		free(ret[--i]);
	return (0);
}

static int	ft_fill_array(char **ret, const char *str, char c)
{
	int		len;
	int		i;

	i = 0;
	while (*str)
	{
		len = 0;
		while (*str && *str == c)
			++str;
		while (*str && *str != c)
		{
			++len;
			++str;
		}
		if (len)
		{
			ret[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (!ret[i])
				return (ft_free_arrays(ret, i));
			ft_strlcpy(ret[i], str - len, len + 1);
			++i;
		}
	}
	return (1);
}

static int	ft_count_str(char const *s, char c)
{
	int	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count_str;
	char	**ret;

	count_str = ft_count_str(s, c);
	ret = malloc(sizeof(char *) * (count_str + 1));
	if (!ret)
		return (0);
	ret[count_str] = 0;
	if (ft_fill_array(ret, s, c))
		return (ret);
	return (0);
}
