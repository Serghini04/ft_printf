/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:47:08 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:47:10 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', count);
	}
	else
		nb = n;
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, count);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
}
