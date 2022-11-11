/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:57:46 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/11 14:04:02 by vlenard          ###   ########.fr       */
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
				|| (((char *)s)[i + 1]) == 's' || (((char *)s)[i + 1]) == 'i' || (((char *)s)[i + 1]) == 'u'
				|| (((char *)s)[i + 1]) == 'x' || (((char *)s)[i + 1]) == 'X' || (((char *)s)[i + 1]) == '%')
			{
				num_args++;
				i++;
			}
		}
		i++; 
	}
	return (num_args);
}

int ft_printf (const char *s, ...)
{
	va_list args;
	int	i;
	int	start;
	int num_args;
	char *subs;

	i = 0;
	start = 0;
	num_args = ft_countargs(s, i);
	//printf("%i\n", num_args);
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