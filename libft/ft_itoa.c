/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:06:46 by fragarc2          #+#    #+#             */
/*   Updated: 2024/05/23 17:20:13 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = (long)n;
	if (nb <= -2147483648)
		return (ft_strdup("-2147483648"));
	i = countlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[i] = (n + 48);
	while (str && n && n != -2147483648)
	{
		str[i--] = ((n % 10) + 48);
		n /= 10;
	}
	return (str);
}

/*
void	ft_print_result(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
*/

