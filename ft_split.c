/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 09:26:13 by cryu              #+#    #+#             */
/*   Updated: 2020/12/30 23:15:05 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_chr_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

char	*ft_split_make(char *res, const char *s, int st_idx, int size)
{
	int	i;

	i = 0; 
	while (size)
	{
		res[i] = s[st_idx - size];
		i++;
		size--;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_res_split(char **res, const char *s, char c, int chr_count)
{
	int	i;
	int	j;
	int	chr_size;

	i = 0;
	j = 0;
	chr_size = 0;
	while (s[i] && j < chr_count)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			chr_size++;
		}
		if (!(res[j] = (char *)malloc(sizeof(char) * chr_size + 1)))
			return (NULL);
		ft_split_make(res[j], s, i, chr_size);
		j++;
		chr_size = 0;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(const char *s, char c)
{
	int		chr_count;
	char	**res;

	if (!s)
		return (NULL);
	chr_count = ft_chr_count(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * chr_count + 1)))
		return (NULL);
	return (ft_res_split(res, s, c, chr_count));
}
