/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:03:50 by cryu              #+#    #+#             */
/*   Updated: 2021/01/06 16:06:00 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	idx;

	idx = 0;
	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!dup)
		return (0);
	while (s[idx])
	{
		dup[idx] = s[idx];
		idx++;
	}
	dup[idx] = '\0';
	return (dup);
}
