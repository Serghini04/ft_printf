/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:49:48 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:49:52 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putnbr_hex(int nb, const char *base, int *count)
{
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb < 16)
		ft_putchar(base[nb % 16], count);
	else
	{
		ft_putnbr_hex(nb / 16, base, count);
		ft_putnbr_hex(nb % 16, base, count);
	}
}
