#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include "./libft/libft.h"

int			ft_printf (const char *s, ...);
char		*ft_utoa (unsigned int n);
char		*ft_tobighex(unsigned int d);
int			ft_takearg(const char *s, int i, va_list args);

#endif