/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:50 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:08:54 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

/*
 * ft_lstlast - Returns the last element of the list.
 * Returns the last element of the list.
 *
 * Parameters:
 * 		lst - A pointer to the start of the list.
 *
 * Return:
 * 		The last element of the list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while ((*lst).next != NULL)
	{
		lst = (*lst).next;
	}
	return (lst);
}
