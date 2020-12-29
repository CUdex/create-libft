/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 10:02:54 by cryu              #+#    #+#             */
/*   Updated: 2020/12/29 10:41:25 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	tmp_idx;
	size_t	start_idx;

	tmp_idx = 0;
	start_idx = (size_t)start;
	if (s == 0 || ft_strlen(s) < start_idx)
		return (0);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (!tmp)
		return (0);
	while (tmp_idx < len)
	{
		tmp[tmp_idx] = s[start_idx + tmp_idx];
		tmp_idx++;
	}
	tmp[tmp_idx] = '\0';
	return (tmp);
}
