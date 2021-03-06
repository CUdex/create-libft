/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:16:29 by cryu              #+#    #+#             */
/*   Updated: 2021/01/06 16:48:37 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t dst_idx;
	size_t src_idx;

	dst_idx = 0;
	src_idx = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dst[dst_idx])
		dst_idx++;
	if (dst_idx > n)
		return (ft_strlen(src) + n);
	while (src[src_idx] && (dst_idx + src_idx < n - 1))
	{
		dst[dst_idx + src_idx] = src[src_idx];
		src_idx++;
	}
	dst[dst_idx + src_idx] = '\0';
	return (dst_idx + ft_strlen(src));
}
