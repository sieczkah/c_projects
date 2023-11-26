/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:10:07 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:10:08 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
* ft_lstiter - Iterates the list 'lst' and applies the function 
'f' to the content of each element.
* This function does not return a value.
*
* Parameters:
* 		lst - The start of the list.
* 		f - The function to apply to each element's content.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
}
