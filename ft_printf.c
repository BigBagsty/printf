/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragarc2 <fragarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:27:59 by fragarc2          #+#    #+#             */
/*   Updated: 2024/06/03 19:41:18 by fragarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printer(va_list vars, const char *str, int *counter)
{
	if (*str == 's')
		ft_putstr(va_arg(vars, char *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnumberB(va_arg(vars, unsigned int), "0123456789", counter);
	else if (*str == 'u')
		ft_putnumberB(va_arg(vars, unsigned int), "0123456789", counter);
	else if (*str == 'c')
		ft_putchar(va_arg(vars, int), counter);
	else if (*str == 'x')
		ft_putnumberB(va_arg(vars, unsigned int), "0123456789abcdef", counter);
	else if (*str == 'X')
		ft_putnumberB(va_arg(vars, unsigned int), "0123456789ABCDEF", counter);
	else if (*str == 'p')
	{
		ft_putchar('0', counter);
		ft_putchar('x', counter);
		ft_putnumberB(va_arg(vars, unsigned long), "0123456789abcdef", counter);
	}
	else if (*str == '%')
		ft_putchar('%', counter);
}

int ft_printf(const char *str, ...)
{
	va_list vars;
	int		counter;
	size_t		i;

	i = 0;
	counter = 0;
	va_start(vars, str);
	while (str[i] && i <= ft_strlen(str))
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i], &counter);
			i++;
		}
		else
		{
			i++;
			printer(vars, &str[i], &counter);
			i++;
		}
	}
	va_end(vars);
	return (counter);
}

int main()
{
	int i = -6;
	ft_printf("%u\n", i);
	printf("%u\n", i);
}

