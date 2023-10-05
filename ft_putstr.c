/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:50:07 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 18:50:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putstr(const char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	*count = i;
}
