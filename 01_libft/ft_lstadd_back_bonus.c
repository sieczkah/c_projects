/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:09:06 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:09:09 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

/*
* ft_lstadd_back - Adds an element to the end of a list.
* Adds the element 'new' at the end of the list. 
* The 'next' pointer of the last element of the list is set to 'new', 
* and 'new' becomes the new end of the list.
*
* Parameters:
* 		lst - A pointer to the start of the list.
* 		new - The new element to add to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		(*last).next = new;
	}
}
