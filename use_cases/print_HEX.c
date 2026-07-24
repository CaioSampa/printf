/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_HEX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:21:44 by casampai          #+#    #+#             */
/*   Updated: 2026/07/24 13:54:21 by casampai         ###   ########.fr       */
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
    str_hex = malloc(count * (sizeof(char) + 1));
    count = 0;
    while(nbr <= 0)
    {
        nbr /= 16;
        if(nbr % 16 > 9)
            print_letters(nbr , 1);
        else
            str_hex[count++] = nbr % 16;
    }
    str_hex[count] = '\0';
    print_str(str_hex);
    free(str_hex);
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
