/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:28:28 by fragarc2          #+#    #+#             */
/*   Updated: 2024/04/29 15:41:25 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, (char)s1[i]) != NULL)
		i++;
	while (ft_strchr(set, (char)s1[j - 1]) != NULL)
		j--;
	temp = ft_substr(s1, i, (j - i));
	return (temp);
}

// int main()
// {
// 	char *s1 = "aaaaaaaaabatata";
// 	char *set = "a";
// 	char *str = ft_strtrim(s1, set);
// 	printf("%s", str);
// 	free (str);
// }
