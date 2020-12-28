/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:58:08 by cryu              #+#    #+#             */
/*   Updated: 2020/12/28 23:10:10 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *cal_chr;

	cal_chr = (char *)malloc(size * nmemb);
	if (!cal_chr)
		return (0);
	ft_bzero(cal_chr, size * nmemb);
	return ((void *)cal_chr);
}
