/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:57:46 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/10 17:22:36 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// c s d i p u x X %

int ft_countargs(const char *s, int i)
{
	int	num_args;
	
	num_args = 0;
	i = 0;
	while (s[i])
	{
		if (((char *)s)[i] == '%')
		{
			if ((((char *)s)[i + 1]) == 'c' || (((char *)s)[i + 1]) == 's' || (((char *)s)[i + 1]) == 'd' 
				|| (((char *)s)[i + 1]) == 's' || (((char *)s)[i + 1]) == 'i' || (((char *)s)[i + 1]) == 'u' || (((char *)s)[i + 1]) == '%')
			{
				num_args++;
				i++;
			}
		}
		i++; 
	}
	return (num_args);
}

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
int ft_printf (const char *s, ...)
{
	va_list args;
	int	i;
	int num_args;
	int start;
	char *subs;

	i = 0;
	start = 0;
	num_args = ft_countargs(s, i);
	printf("%i\n", num_args);
	va_start(args, s);
	while (i <= (int)ft_strlen(s))
	{
		
		if (s[i] == '%' || s[i] == '\0')
		{
			subs = ft_substr(s, start, i - start);
			if (subs)
			{
				ft_putstr_fd(subs, 1);
				free (subs);
			}
			if (s[i] == '\0')
				return (0);
			if(ft_takearg(s, i, args) == 0)
			{
				return (0);
			}
			i = i + 2;
			start = i;
		}
		i++;
	}

	va_end(args);
	return (0);
}