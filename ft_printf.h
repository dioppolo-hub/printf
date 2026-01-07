/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:14:36 by dioppolo          #+#    #+#             */
/*   Updated: 2026/01/07 12:13:22 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>
# include <bsd/string.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>

void			ft_putunbr_fd(unsigned int n, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_uitoa(unsigned int n);
int				print_int(va_list ap);
int				print_uns(va_list ap);
int				print_hexptr(unsigned long long n);
int				print_uphex(va_list ap);
int				print_hex(va_list ap);
int				print_str(va_list ap);
int				print_char(va_list ap);
int				print_ptr(va_list ap);
char			*ft_itoa(int n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_bzero(void *s, size_t n);

#endif