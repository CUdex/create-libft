/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:48:09 by cryu              #+#    #+#             */
/*   Updated: 2021/01/06 15:42:47 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*s1_chr;
	unsigned char	*s2_chr;

	idx = 0;
	s1_chr = (unsigned char *)s1;
	s2_chr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (idx < n && s1_chr[idx] == s2_chr[idx])
		idx++;
	if (idx == n)
		return (0);
	return (s1_chr[idx] - s2_chr[idx]);
}
