/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:46:30 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:46:37 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putptr(long int nb, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(base[nb % 16], count);
	else
	{
		ft_putptr(nb / 16, count);
		ft_putptr(nb % 16, count);
	}
}

void	ft_print_add(void *format, int *count)
{
	long int	ptr;

	ptr = (long int)format;
	ft_putstr("0x", count);
	ft_putptr(ptr, count);
}
