/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                                    :+:      :+:    :+:   */
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
	static char	*storage[OPEN_MAX];

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	{
		free(storage[fd]);
		storage[fd] = NULL;
		return (NULL);
	}
	if (!storage[fd])
	{
		storage[fd] = malloc(sizeof(char));
		if (!storage[fd])
			return (NULL);
		storage[fd][0] = '\0';
	}
	storage[fd] = read_from_file(fd, storage[fd]);
	if (!storage[fd])
		return (free(storage[fd]), NULL);
	line = extract_line(storage[fd]);
	storage = get_remain(storage[fd]);
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
	char	*line;
	char	*newline_char;
	size_t	len_line;

	line = NULL;
	if (!*storage)
		return (NULL);
	newline_char = ft_strchr(storage, '\n');
	if (newline_char)
		len_line = newline_char - storage + 1;
	else
		len_line = ft_strlen(storage);
	line = malloc ((len_line + 1) * sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, storage, len_line + 1);
	return (line);
}

char	*get_remain(char *storage)
{
	char	*new_storage;
	char	*newline_pointer;
	size_t	new_len;
	size_t	start_pos;

	newline_pointer = ft_strchr(storage, '\n');
	if (!newline_pointer)
		return (free(storage), NULL);
	start_pos = newline_pointer - storage + 1;
	new_len = ft_strlen(storage) - start_pos + 1;
	new_storage = malloc((new_len) * sizeof(char));
	if (!new_storage)
		return (NULL);
	ft_strlcpy(new_storage, &storage[start_pos], new_len);
	free(storage);
	return (new_storage);
}
