/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:55:41 by cryu              #+#    #+#             */
/*   Updated: 2021/01/05 14:26:25 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr_lst;

	curr_lst = *lst;
	if (lst || *lst)
	{
		while (curr_lst)
		{
			*lst = curr_lst->next;
			del(curr_lst->content);
			free(curr_lst);
			curr_lst = *lst;
		}
	}
}
