/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:59:32 by casampai          #+#    #+#             */
/*   Updated: 2026/07/24 13:53:26 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

void	select_specifier(char spec, va_list ref)
{
	if(spec == 'c')
		print_char((char) va_arg(ref, int));
	else if(spec == 's')
		print_str(va_arg(ref, char *));
	else if(spec == 'd' || spec == 'i')
		print_nbr(va_arg(ref, int));
	else if(spec == 'x')
		print_hex(va_arg(ref, int), 1);
	else
		return;
}

int	ft_printf(const	char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			select_specifier(*format, args);
		}
		else
			print_char(*format);
		format++;
	}

	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("meu hex %x", 438);

	return (0);
}
