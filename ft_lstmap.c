/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:23:58 by fcarranz          #+#    #+#             */
/*   Updated: 2024/01/31 21:18:50 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	**new_lst;

	if (!lst || !f || !del)
		return ;
	tmp = ft_lstnew(lst->content);
	if (!tmp)
		return (NULL);
	*new_lst = tmp;
	lst = *new_lst->next;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
			ft_lstclear(new_lst, del);
		f(tmp->comntent);
	}
}
