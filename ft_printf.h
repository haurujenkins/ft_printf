/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-pier <lle-pier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:04:12 by lle-pier          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:57 by lle-pier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		char_print(char c);
char	*mystrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		str_print(char *s);
int		int_print(int n);
int		hex_print(size_t ptr);
int		uint_print(unsigned int n);
int		hex_lower_print(long num);
int		hex_upper_print(long num);
int		ft_printf(const char *format, ...);

#endif