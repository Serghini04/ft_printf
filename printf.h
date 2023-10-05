/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <mehdiaerghini@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:20:31 by meserghi          #+#    #+#             */
/*   Updated: 2023/10/02 19:21:04 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(const char c, int *count);
void	ft_putnbr_hex(int nb, const char *base, int *count);
void	ft_putnbr_u(unsigned int nb, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_print_add(void *format, int *count);

#endif