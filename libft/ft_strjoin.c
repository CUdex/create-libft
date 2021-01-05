/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 10:47:07 by cryu              #+#    #+#             */
/*   Updated: 2020/12/29 12:00:21 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		tmp_idx;
	int		i;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * size + 1);
	if (!tmp)
		return (0);
	tmp_idx = 0;
	i = 0;
	while (s1[i])
		tmp[tmp_idx++] = s1[i++];
	i = 0;
	while (s2[i])
		tmp[tmp_idx++] = s2[i++];
	tmp[tmp_idx] = '\0';
	return (tmp);
}
