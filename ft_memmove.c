/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:45:17 by cryu              #+#    #+#             */
/*   Updated: 2020/12/29 16:29:50 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_chr;
	unsigned char	*src_chr;
	size_t			idx;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	idx = 0;
	if (dst < src)
	{
		while (idx < n)
		{
			dst_chr[idx] = src_chr[idx];
			idx++;
		}
	}
	else if (dst > src)
	{
		while (n)
		{
			dst_chr[n - 1] = src_chr[n - 1];
			n--;
		}
	}
	return (dst);
}
