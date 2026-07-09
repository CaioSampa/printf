/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:03:05 by casampai          #+#    #+#             */
/*   Updated: 2026/07/09 15:59:05 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(char c)
{
	ft_putchar_fd(c, 1);
}

void	print_str(char *str)
{
	ft_putstr_fd(str, 1);
}
void	print_ptr(void *ptr)
{
	unsigned char *p;

	p = (unsigned char *) &ptr;
	ft_putstr_fd(p, 1);
}
