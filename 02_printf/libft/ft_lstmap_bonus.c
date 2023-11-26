/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:10:15 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:10:17 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*
** The function ft_lstmap() iterates the list 'lst' and applies the function 'f'
** to the content of each element. It creates a new list resulting from the
** successive applications of the function 'f'. The 'del' function is used to
** delete the content of an element if needed.
**
** Parameters:
** - lst: The original list.
** - f: The function to apply to each element's content.
** - del: The function to delete the content of an element if needed.
**
** Return: The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f((*lst).content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = (*lst).next;
	}
	return (new_list);
}
