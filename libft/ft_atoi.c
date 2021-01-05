/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 09:57:10 by cryu              #+#    #+#             */
/*   Updated: 2020/12/24 17:54:51 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' ||
			c == '\f' ||
			c == '\n' ||
			c == '\t' ||
			c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int nega;
	int res;

	i = 0;
	nega = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		nega *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * nega);
}
