/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:39:31 by cryu              #+#    #+#             */
/*   Updated: 2020/12/28 18:14:44 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_chr;
	unsigned char *src_chr;
	size_t idx;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	idx = 0;
	while (idx < n && src_chr[idx])
	{
		dst_chr[idx] = src_chr[idx];
		idx++;
		if (src_chr[idx] == c)
		{
			dst_chr[idx] = src_chr[idx];
			return ((void *)&dst_chr[idx + 1]);
		}
	}
	return (0);
}
