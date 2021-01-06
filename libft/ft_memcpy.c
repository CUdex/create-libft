/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:20:03 by cryu              #+#    #+#             */
/*   Updated: 2021/01/06 14:56:35 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_chr;
	unsigned char	*src_chr;
	size_t			idx;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	idx = 0;
	if (dst_chr == src_chr)
		return (dst_chr);
	while (idx < n)
	{
		dst_chr[idx] = src_chr[idx];
		idx++;
	}
	return (dst);
}
