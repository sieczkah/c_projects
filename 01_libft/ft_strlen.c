/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:07:31 by hsieczka          #+#    #+#             */
/*   Updated: 2023/09/12 19:07:33 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *s);

size_t	ft_strlen(char *s)
{
	int	i;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_strlen("abcd");
	return(0);
}