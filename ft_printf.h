#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include "./libft/libft.h"

typedef unsigned long int intptr;

int			ft_printf (const char *s, ...);
char		*ft_utoa (unsigned int n);
char		*ft_tohex(unsigned int d, char c);
int			ft_takearg(const char *s, int i, va_list args);
char		*ft_ultopointer(intptr n);
int			ft_isX(va_list args, int print_length);
int			ft_isx(va_list args, int print_length);
int			ft_ispointer(va_list args, int print_length);
int			ft_iss(va_list args, int print_length);
int			ft_putandcountstr(char *str, int print_length);

#endif