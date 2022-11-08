/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:57:46 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/08 20:24:06 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_printf (const char *s, ...)
{
	va_list args;
	int	i;
	int	x;
	int num_args;

	num_args = ft_strlen(s);
	va_start(args, s);
	i = 0;
	while (i < num_args)
	{
		if (s[i] = 'd')
		{
			int x = va_arg(args, int);
		}
		i++;
	}


	va_end(args);
}