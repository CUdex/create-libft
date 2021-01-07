/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:24:13 by cryu              #+#    #+#             */
/*   Updated: 2021/01/07 16:36:42 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *res;

	if (!lst || !f)
		return (NULL);
	if (!(res = ft_lstnew((*f)(lst->content))))
		return (NULL);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
