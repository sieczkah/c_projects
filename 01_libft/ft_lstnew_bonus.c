/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:07:24 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:07:49 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

/*
* ft_lstnew - Creates a new list node.
* Allocates (with malloc) and returns a new element for a linked list. 
* The variable 'content' is initialized with the value passed as a parameter 
* and 'next' is initialized to NULL.
*
* Parameters:
* 		content - The value to put in the new node.
* Returns:
* 		The new node, or NULL if the allocation fails.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	(*new_node).content = content;
	(*new_node).next = NULL;
	return (new_node);
}
