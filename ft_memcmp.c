/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:48:09 by cryu              #+#    #+#             */
/*   Updated: 2020/12/28 00:16:04 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (idx < n && s1[idx] == *s2[idx])
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
