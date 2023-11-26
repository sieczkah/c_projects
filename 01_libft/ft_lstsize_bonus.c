/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:34 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:08:38 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

/*
* ft_lstsize - Counts the number of elements in a list.
* Iterates over the list 'lst' and increments a counter for each element.
*
* Parameters:
* 		lst - The start of the list.
* Returns:
* 		The total number of elements in the list.
*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = (*lst).next;
		count++;
	}
	return (count);
}
