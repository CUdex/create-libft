/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:39:31 by cryu              #+#    #+#             */
/*   Updated: 2021/01/07 15:15:24 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_chr;
	unsigned char	*src_chr;
	size_t			idx;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		dst_chr[idx] = src_chr[idx];
		if (src_chr[idx] == (unsigned char)c)
			return ((void *)&dst_chr[idx + 1]);
		idx++;
	}
	return (NULL);
}
