/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:05:20 by cryu              #+#    #+#             */
/*   Updated: 2021/01/07 11:01:17 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *re_lst;

	re_lst = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while (re_lst->next)
			re_lst = re_lst->next;
		re_lst->next = new;
	}
}
