/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:15:00 by cryu              #+#    #+#             */
/*   Updated: 2020/12/28 21:27:49 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *s_chr;

	s_chr = s;
	while (n)
	{
		*s_chr = c;
		s_chr++;
		n--;
	}
	return (s);
}

int		main()
{
	char s[10] = "0123456789";

	printf("%s\n", (char *)ft_memset(s, '1', 4));
}
