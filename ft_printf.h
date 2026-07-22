/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:49:28 by casampai          #+#    #+#             */
/*   Updated: 2026/07/22 15:37:06 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    FT_PRINTF_H
# define    FT_PRINTF_H

# include "stdarg.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft/libft.h"

void	print_char(char c);
void	print_str(char *str);
void	print_ptr(void *ptr);
void	print_nbr(int nbr);
#endif