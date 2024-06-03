/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:46:46 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/21 15:58:20 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(void *content)
// {
// 	char *temp;
// 	temp = ft_strdup((char *)content);
// 	temp[0] = temp[0] + 1;
// 	content = (void *) temp;
// }

// void	del(void *content)
// {
// 	content = NULL;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*a;

	if (lst == NULL)
		return (NULL);
	lst1 = NULL;
	while (lst)
	{
		a = ft_lstnew((*f)(lst->content));
		if (a == NULL)
		{
			ft_lstclear(&lst1, (*del));
			return (lst1);
		}
		ft_lstadd_back(&lst1, a);
		lst = lst->next;
	}
	return (lst1);
}

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("asdaddsa");
// 	lst = ft_lstmap(lst, (void *)f, (void *)del);
// 	printf("%s\n", (char *)lst->content);
// }
