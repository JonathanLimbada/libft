/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:58:11 by jlimbada          #+#    #+#             */
/*   Updated: 2019/06/05 14:07:58 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*nl_head;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(new_list = ft_lstnew(NULL, 0)))
		return (NULL);
	new_list = f(lst);
	nl_head = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_list->next = f(lst);
		new_list = new_list->next;
	}
	return (nl_head);
}
