/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 00:01:21 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/02 15:47:18 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	i = 0;
	j = dst_len;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}

// int main()
// {
// 	char *str1 = "abadada";
// 	char str2[20] = "gagaga";

// 	printf("%zu\n", ft_strlcat(str2, str1, 20));
// 	printf("%s\n", str2);
// }
