/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:04:20 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/03 17:44:52 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*temp2;
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (src > dest)
	{
		temp = (char *)dest;
		temp2 = (char *)src;
		while (i < n)
		{
			temp[i] = temp2[i];
			i++;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
