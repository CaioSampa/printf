/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:54:04 by casampai          #+#    #+#             */
/*   Updated: 2026/07/17 15:56:29 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		va_arg(args, char);
		format++;
	}

	va_end(args);
	return (0);
}
