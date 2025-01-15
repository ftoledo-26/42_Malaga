/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:29:46 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/19 23:14:03 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

vodi	polish_list(t_list **list)
{
	t_list	*last_node;
	t_list	*clean_node;
	int 	i;
	int		k;
	char	*buf;

	buf = malloc(BUFFER_SIZE +1);
	clean_node = malloc(sizeof(t_list));
	if (NULL == buf || NULL == clean_node)
		return ;
	last_node = find_last_node(*list)
	i = 0;
	k = 0;
	whiele(last_node ->str_buf[i] && last_node -> strbuff[++i])
		buf{k++} = last_node->str_buf[i]
	buf[k]  = '\0';
	clean_node ->str_buf = buf;
	clean_node -> next = NULL;
	dealloc(list, clean_node,buf);	
}
char	*get_line(t_list *list)
 {
	int 	str_len;
	char	*next_len;

	if(NULL = list)
		return (NULL);
	str_len = len_to_newline(list);
	next_str = malloc(str_len + 1);
	if (NULL == next_len)
		return (NULL);
	copy_str(list,next_str);
	return (next_str);
 }


void	append(t_list **list, char buf)
{
	list_t		*new_list;
	list_t		*last_list;

	last_list = find_last_node(*list)
	new_list = malloc(sizeof(t_list ));
	if (NULL = new_list)
		return ;
	if (NULL = last_list)
		*list = new_list;
	else
		last_list -> str_buf = new_list;
	new_list ->str_buf = new_list;
	new_list ->next = NULL;
}

void	create_list(t_list **list, int fd)
{
	int		char_read;
	char	*buf;

	while (!found_newline)
	{
		buf = malloc(BUFFER_SIZE + 1) 
		if (NULL = buf)
			return (NULL);
		char_read = read(fd,buf,BUFFER_SIZE);
		if (!char_read)
		{
			free (buf);
			return;
		}
		buf*[char_read] = '\0';
		append(list,buf);
	}
	
}

char	*ft_get_next_line(int fd)
{
	static t_list = *list = NULL;
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line,0)<0)
		return (NULL);
	cretate_list(&list, fd);
	if (list == NULL)
		return (NULL);
	next_line = get_line(&list);
	polish_list(&list);
	return(next_line);
}
