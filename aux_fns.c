/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_fns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:03:05 by casampai          #+#    #+#             */
/*   Updated: 2026/07/24 15:51:44 by casampai         ###   ########.fr       */
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

void	print_nbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
}

static	int	get_len_n(long n)
{
	long	result;
	size_t	len;

	result = n;
	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		len++;
	while (result != 0)
	{
		result /= 10;
		len++;
	}
	return (len);
}

static char print_letters(long nbr, int type)
{
	// A = 10 | B = 11 | C = 12 | D = 13 | E = 14 | F = 15|
	if (nbr == 10)
		return ('A');
	if (nbr == 11)
		return ('B');
	if (nbr == 12)
		return ('C');
	if (nbr == 13)
		return ('D');
	if (nbr == 14)
		return ('E');
	if (nbr == 15)
		return ('F');
}
void print_hex(long nbr, int type)
{
    long    number;
	int n;
	char *str;

    number = nbr;
	n = get_len_n(number);
	str = malloc(n * sizeof(char) + 1);
	str[n + 1] = '\0';
	while (n)
	{
		if(number % 16 > 9)
			str[n] = print_letters(number % 16, 1);
		if(number % 16 <= 9)
			str[n] = (number % 16) + '0';
			number /= 16;
			n--;
		}
	print_char(str[0]);
	print_str(str);
	free(str);
}

