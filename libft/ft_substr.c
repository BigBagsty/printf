/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:30:27 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/09 16:24:37 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	a;

	a = ft_strlen(s);
	if (start >= a)
		len = 0;
	else if (len + start > a)
		len = a - start;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	if (len == 0)
	{
		temp[0] = '\0';
		return (temp);
	}
	if (temp != NULL)
		ft_strlcpy(temp, &s[start], len + 1);
	return (temp);
}

// int main()
// {
// 	int i = 20;
// 	char e[] = "1234";
// 	char *str = ft_substr("1", 42, 42000000);

// 	printf("%s", str);
// 	free (str);
// }
