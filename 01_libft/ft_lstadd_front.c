/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:16 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:08:18 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

/*
* ft_lstadd_front - Adds an element to the start of a list.
* Adds the element 'new' at the beginning of the list. 
* The 'next' pointer of 'new' is set to the old start of the list,
* and the start of the list is set to 'new'.
*
* Parameters:
* 		lst - A pointer to the start of the list.
* 		new - The new element to add to the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		(*new).next = *lst;
		*lst = new;
	}
}
