/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsieczka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:12:23 by hsieczka          #+#    #+#             */
/*   Updated: 2024/01/12 17:12:24 by hsieczka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*storage;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	if (!storage)
	{
		storage = malloc(sizeof(char));
		if (!storage)
			return (NULL);
		storage[0] = '\0';
	}
	storage = read_from_file(fd, storage);
	if (!storage)
		return (free(storage), NULL);
	line = extract_line(storage);
	storage = get_remain(storage);
	return (line);
}

char	*read_from_file(int fd, char *storage)
{
	char	*str_bucket;
	char	*tmp;
	int		bytes_read;

	str_bucket = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str_bucket)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(storage, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, str_bucket, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(str_bucket), NULL);
		str_bucket[bytes_read] = '\0';
		tmp = ft_strjoin(storage, str_bucket);
		free(storage);
		storage = tmp;
	}
	free (str_bucket);
	return (storage);
}

char	*extract_line(char *storage)
{
	int		i;
	char	*line;

	i = 0;
	if (!storage[i])
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	line = NULL;
	line = (char *)malloc(sizeof(char) * (i + 2)); ///n //0
	if (!line)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		line[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
	{
		line[i] = storage[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_remain(char *storage)
{
	int		i;
	int		j;
	int		len;
	char	*new_storage;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
		return (free(storage), NULL);
	new_storage = NULL;
	len = ft_strlen(storage);
	new_storage = (char *)malloc((len - i) * sizeof(char));
	if (!new_storage)
		return (NULL);
	i++;
	j = 0;
	while (storage[i])
		new_storage[j++] = storage[i++];
	new_storage[j] = '\0';
	free (storage);
	return (new_storage);
}



