/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:53:00 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/13 17:16:16 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(const char *str, char c)
{
	int	words;
	int	separator;

	words = 0;
	separator = 0;
	while (*str)
	{
		if (*str != c && separator == 0)
		{
			separator = 1;
			words++;
		}
		else if (*str == c)
			separator = 0;
		str++;
	}
	return (words);
}

static void	freesplit(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
}

static char	**ft_spilled(char const *s, char c, char **temp)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			temp[i] = ft_substr(s - len, 0, len);
			if (!temp[i++])
				return (freesplit(temp, i - 1), NULL);
		}
		while (*s != '\0' && *s == c)
			s++;
	}
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**temp;

	if (!s)
		return (NULL);
	temp = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!temp)
		return (0);
	temp[word_count(s, c)] = 0;
	if (!ft_spilled(s, c, temp))
		return (NULL);
	return (temp);
}
// int main()
// {
// 	char **strs;
// 	char *str ="tripouille";
// 	char c = 0;
// 	int i = 0;
// 	strs = ft_split("lorem ipsum ", ' ');
// 	if (!strs)
// 		return (0);
// 	while (strs[i])
// 	{
// 		printf("%s \n", strs[i]);
// 		free(strs[i]);
// 		i++;
// 	}
// 	printf("%s \n", strs[i]);
// 	free(strs);
// }
