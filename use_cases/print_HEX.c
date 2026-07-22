/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_HEX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:21:44 by casampai          #+#    #+#             */
/*   Updated: 2026/07/22 18:04:26 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_hex(long nbr, int type)
{
    long    number;
    int     count;
    char    *str_hex;
    
    count = 0;
    number = nbr;
    while (!(number <= 0))
    {
        number /= 16;
        count++;
    }
    str_hex = ft_calloc(count, (sizeof(char)))
}

static void print_letters(long nbr, int type)
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
