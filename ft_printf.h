/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-09 10:25:48 by ainigo-l          #+#    #+#             */
/*   Updated: 2024-10-09 10:25:48 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
void	ft_putnbr(int nbr, int *count);
void	print_base(unsigned long long n, char *base, int base_len, int *count);
void	ft_putstr(char *str, int *count);

#endif