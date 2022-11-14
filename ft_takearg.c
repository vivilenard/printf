/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:49:29 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/14 08:37:47 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_isX(va_list args)
{
	char *str;
	str = ft_tohex(va_arg(args, unsigned int), 'X');
	ft_putstr_fd(str, 1);
	return (1);
}
int	ft_isx(va_list args)
{
	char *str;
	str = ft_tohex(va_arg(args, unsigned int), 'x');
	ft_putstr_fd(str, 1);
	return (1);
}
int	ft_ispointer(va_list args)
{
	char *str;
	str = ft_ultopointer(va_arg(args, unsigned long int));
	ft_putstr_fd(str, 1);
	return (1);
}
int	ft_iss(va_list args)
{
	char *str;
	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
	return (1);
}
int	ft_isu(va_list args, int ch)
{
	ch = (unsigned int)ch;
	ch = va_arg(args, unsigned int);
	ft_putstr_fd(ft_utoa(ch), 1);	
	return (1);
}
int	ft_isdi(va_list args, char ch)
{
	ch = va_arg(args, int);
	ft_putstr_fd(ft_itoa(ch), 1);	
	return (1);
}
int	ft_isc(va_list args, char ch)
{
	ch = va_arg(args, int);
	write(1, &ch, 1);
	return (1);
}
int ft_ispercent(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int ft_takearg(const char *s, int i, va_list args)
{
	int ch;

	i++;
	ch = '%';
	if (((char *)s)[i] == 'd' || ((char *)s)[i] == 'i')
		return (ft_isdi(args, ch));
	if (((char *)s)[i] == 'c')
		return (ft_isc(args, ch));
	if (((char *)s)[i] == 's')
		return (ft_iss(args));
	if (((char *)s)[i] == 'X')
		return (ft_isX(args));
	if (((char *)s)[i] == 'x')
		return (ft_isx(args));
	if (((char *)s)[i] == 'u')
		return (ft_isu(args, ch));
	if (((char *)s)[i] == '%')
		return (ft_ispercent(ch));
	if (((char *)s)[i] == 'p')
		return (ft_ispointer(args));
	return(0);
}