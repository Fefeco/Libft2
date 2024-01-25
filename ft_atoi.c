/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:05:28 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/14 11:49:59 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	rta;

	i = 0;
	sign = 1;
	rta = 0;
	while ((*(str + i) >= '\t' && *(str + i) <= '\r') || *(str + i) == ' ')
		++i;
	if (*(str + i) == '-')
	{
		sign *= -1;
		++i;
	}
	else if (*(str + i) == '+')
		++i;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		rta = rta * 10 + (*(str + i) - '0');
		++i;
	}
	return (rta * sign);
}
