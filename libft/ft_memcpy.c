/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:17:32 by fragarc2          #+#    #+#             */
/*   Updated: 2024/04/29 15:40:32 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*temp2;

	temp = (char *)dest;
	temp2 = (char *)src;
	while (n-- > 0)
		temp[n] = temp2[n];
	return (dest);
}

// int main()
// {
// 	// char i[1] = "";
// 	char e[6] = "batata";

// 	ft_memcpy(e + 2, e, 6);
// 	write(1, e, 10);
// }
