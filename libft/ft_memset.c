/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:47 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/13 16:00:42 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n-- > 0)
		temp[n] = c;
	return (s);
}
// int main()
// {
// 	char i[50] = "batata";

// 	ft_memset(i, '0', 50);
// }
