/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:49:29 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/11 13:50:22 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_takearg(const char *s, int i, va_list args)
{
	i++;
	int ch;

	ch = '%';
	if (((char *)s)[i] == 'd' || ((char *)s)[i] == 'i')
	{
		ch = va_arg(args, int);
		ft_putstr_fd(ft_itoa(ch), 1);	
		return (1);
	}
	if (((char *)s)[i] == 'c')
	{
		ch = va_arg(args, int);
		write(1, &ch, 1);
		return (1);
	}
	if (((char *)s)[i] == 's')
	{
		char *str;
		str = va_arg(args, char *);
		ft_putstr_fd(str, 1);
		return (1);
	}
	if (((char *)s)[i] == 'X')
	{
		char *str;
		str = ft_tobighex(va_arg(args, unsigned int));
		ft_putstr_fd(str, 1);
		return (1);
	}
	if (((char *)s)[i] == 'x')
	{
		char *str;
		str = ft_tobighex(va_arg(args, unsigned int));
		while (str[i])
		{
			ft_tolower(str[i]);
			i++;
		}
		ft_putstr_fd(str, 1);
		return (1);
	}
	if (((char *)s)[i] == 'u')
	{
		ch = (unsigned int)ch;
		ch = va_arg(args, unsigned int);
		ft_putstr_fd(ft_utoa(ch), 1);	
		return (1);
	}
	if (((char *)s)[i] == '%')
	{
		write(1, &ch, 1);
		return (1);
	}
	return(0);
}