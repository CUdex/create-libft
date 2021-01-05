/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 00:19:36 by cryu              #+#    #+#             */
/*   Updated: 2020/12/31 16:04:13 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *tmp;

	tmp = s;
	while (*tmp && n > 0)
	{
		if (*tmp == c)
			return ((void *)tmp);
		tmp++;
		n--;
	}
	return (NULL);
}
