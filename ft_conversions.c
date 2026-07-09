/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:03:05 by casampai          #+#    #+#             */
/*   Updated: 2026/07/09 15:25:14 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}
void	print_ptr(void *ptr)
{
	
}