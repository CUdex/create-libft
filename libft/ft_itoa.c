/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 08:16:58 by cryu              #+#    #+#             */
/*   Updated: 2020/12/31 14:38:22 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_change_chr(char *res, long long n_long, int count)
{
	long long	tmp;
	int			i;

	i = 0;
	if (n_long == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res[count] = '\0';
	if (n_long < 0)
	{
		res[0] = '-';
		n_long *= -1;
		i = 1;
	}
	while (n_long && count > 0 + i)
	{
		tmp = n_long % 10;
		res[--count] = tmp + '0';
		n_long = n_long / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;
	long long	n_long;

	n_long = n;
	len = ft_count(n);
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_change_chr(res, n_long, len);
	return (res);
}
