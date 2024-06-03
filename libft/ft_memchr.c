/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:26:42 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/16 15:29:55 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if (c >= 256)
		c -= 256;
	while (i < n)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp++;
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char i[10] = "batata";

// 	printf("%s", (char *)ft_memchr(i, 't' + 256, 10));
// }
