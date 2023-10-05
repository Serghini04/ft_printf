/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:47:28 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:47:31 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putnbr_u(unsigned int nb, int *count)
{
	if (nb > 0 && nb <= 9)
		ft_putchar(nb + 48, count);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
}
