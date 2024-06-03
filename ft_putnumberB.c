/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumberB.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:39 by fragarc2          #+#    #+#             */
/*   Updated: 2024/06/03 19:41:59 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


void	ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *s, int *counter)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	i = 0;
	while (s[i] != 0)
		ft_putchar(s[i++], counter);
}

static int	checkerror(char *str)
{
	size_t	i;
	size_t	j;
	size_t	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnumberB(int nbr, char *base, int *counter)
{
	int		len;
	int		error;
	long	n;

	error = checkerror(base);
	len = ft_strlen(base);
	n = nbr;
	if (error == 1)
	{
		if (n < 0)
		{
			ft_putchar('-', counter);
			n *= -1;
		}
		if (n < len)
			ft_putchar(base[n], counter);
		if (n >= len)
		{
			ft_putnumberB(n / len, base, counter);
			ft_putnumberB(n % len, base, counter);
		}
	}
}
