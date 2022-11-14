/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:57:46 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/14 15:00:00 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// c s d i p u x X %
int ft_putandcountstr(char *str, int print_length)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		print_length++;
	}
	return (print_length);
}
int ft_printf (const char *s, ...)
{
	va_list args;
	int	i;
	int	start;
	int	print_length;
	char *subs;

	i = 0;
	start = 0;
	print_length = 0;
	va_start(args, s);
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == '%' || s[i] == '\0')
		{
			subs = ft_substr(s, start, i - start);
			if (subs)
			{
				print_length = ft_putandcountstr(subs, print_length);
				free (subs);
			}
			if (s[i] == '\0')
				return (print_length);
			print_length = print_length + ft_takearg(s, i, args);
			i++;
			start = i + 1;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}

			/*if(ft_takearg(s, i, args) == 0)
			{
				return (print_length);
			} */