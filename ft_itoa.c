/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:54:57 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/24 18:07:17 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_special_cases(char *rta, int n, int len)
{
	if (n == 0)
		ft_strlcpy(rta, "0", len + 1);
	else
		ft_strlcpy(rta, "-2147483648", len + 1);
}

static int	ft_ilen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	len = 0;
	if (n < 0)
	{
		++len;
		n *= -1;
	}
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*rta;
	int		len;

	len = ft_ilen(n);
	rta = (char *)malloc(sizeof(char) * (len + 1));
	if (!rta)
		return (rta);
	if (n == -2147483648 || n == 0)
	{
		ft_special_cases(rta, n, len);
		return (rta);
	}
	if (n < 0)
	{
		n *= -1;
		rta[0] = '-';
	}
	rta[len] = '\0';
	while (n != 0)
	{
		rta[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (rta);
}
