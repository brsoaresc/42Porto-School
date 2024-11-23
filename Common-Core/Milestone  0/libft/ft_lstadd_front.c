/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:36:43 by brsoares          #+#    #+#             */
/*   Updated: 2024/11/19 08:36:46 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include "ft_lstnew.c"
int	main(void)
{
	t_list	*list = ft_lstnew("tangerina");
	ft_lstadd_front(&list, ft_lstnew("goiaba"));
	ft_lstadd_front(&list, ft_lstnew("laranja"));
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}*/
