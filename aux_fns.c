/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_fns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:03:05 by casampai          #+#    #+#             */
/*   Updated: 2026/07/22 17:51:19 by casampai         ###   ########.fr       */
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
void print_letters(long nbr, int type)
{
	// A = 10 | B = 11 | C = 12 | D = 13 | E = 14 | F = 15|
	if (nbr == 10)
		print_char('A');
	if (nbr == 11)
		print_char('B');
	if (nbr == 12)
		print_char('C');
	if (nbr == 13)
		print_char('D');
	if (nbr == 14)
		print_char('E');
	if (nbr == 15)
		print_char('F');
}

void print_hex(long nbr, int type)
{
    long number;
	int count;

	count = 0;
    number = nbr;
    while (number)
	{
        number /= 16;
		count++;
	}
	number = 1;
    while (count && number != nbr)
    {
        number *= 16;
        if (number % 16 < 10)
            print_nbr(number);
        if(number % 16 >= 10 && number % 16 <= 15)
            print_letters(nbr, 1);
		count--;
    }
}

