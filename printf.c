/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:47:45 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:47:47 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_format(va_list ap, const char format, int *count)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ap, const char *), count);
	else if (format == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 'u')
		ft_putnbr_u(va_arg(ap, unsigned int), count);
	else if (format == 'x')
		ft_putnbr_hex(va_arg(ap, int), "0123456789abcdef", count);
	else if (format == 'X')
		ft_putnbr_hex(va_arg(ap, int), "0123456789ABCDEF", count);
	else if (format == 'p')
		ft_print_add(va_arg(ap, void *), count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(ap, *format, &count);
			format++;
		}
		ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
