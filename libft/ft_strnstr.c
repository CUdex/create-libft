/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 00:59:56 by cryu              #+#    #+#             */
/*   Updated: 2020/12/27 15:40:50 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t big_idx;
	size_t lit_idx;

	big_idx = 0;
	lit_idx = 0;
	if (!*little)
		return ((char *)big);
	while (big_idx < len)
	{
		lit_idx = 0;
		if (big[big_idx] == little[lit_idx])
		{
			while (big_idx + lit_idx < len && little[lit_idx])
			{
				if (big[big_idx + lit_idx] != little[lit_idx])
					break ;
				lit_idx++;
			}
			if (!little[lit_idx])
				return ((char *)&big[big_idx]);
		}
		big_idx++;
	}
	return (0);
}
