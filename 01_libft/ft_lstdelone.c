/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <hsieczka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:09:25 by hsieczka          #+#    #+#             */
/*   Updated: 2023/11/01 20:09:27 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*
* ft_lstdelone - Deletes a single list element.
* Takes as a parameter an element and frees the memory of the element’s content 
* using the function 'del' given as a parameter and free the element. 
* The memory of 'next' must not be freed.
*
* Parameters:
* 		lst - The element to delete.
* 		del - The function to delete the content.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((*lst).content);
	free(lst);
}
