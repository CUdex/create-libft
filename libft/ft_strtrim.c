/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 12:14:06 by cryu              #+#    #+#             */
/*   Updated: 2021/01/07 16:05:14 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(char s, const char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		start_idx;
	int		end_idx;
	int		tmp_idx;

	if (!s1 || !set)
		return (NULL);
	start_idx = 0;
	end_idx = (int)ft_strlen(s1);
	while (ft_check(s1[start_idx], set) && s1[start_idx])
		start_idx++;
	while (ft_check(s1[end_idx - 1], set) && start_idx < end_idx)
		end_idx--;
	if (!(tmp = (char *)malloc(sizeof(char) * ((end_idx - start_idx) + 1))))
		return (NULL);
	tmp_idx = 0;
	while (start_idx < end_idx)
		tmp[tmp_idx++] = s1[start_idx++];
	tmp[tmp_idx] = '\0';
	return (tmp);
}
