/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:56:33 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/08 16:32:53 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = 0;
	if (ft_strlen(little) > len)
		return (NULL);
	if (!big || !little)
		return (NULL);
	if (!little[i])
		return ((char *)big);
	temp = (char *)big;
	while (temp[j] && j <= len)
	{
		i = 0;
		while (j + i < len && temp[j + i]
			&& temp[j + i] == little[i])
			i++;
		if (!little[i] && j < len)
			return (temp + j);
		j++;
	}
	return (NULL);
}
