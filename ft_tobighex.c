/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobighex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:59:34 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/11 15:02:47 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char ft_converttocharacter(unsigned long int n)
{
	char			c;
	unsigned long int	i;

	if (n >= 10)
	{
		i = 10;
		c = 'A';
		while (i < 16)
		{
			if (i == n)
				break;
			c++;
			i++;
		}
	}
	else 
	{
		c = n + '0';
	}
	return (c);
}

int ft_countstr(int d)
{
	unsigned long int	count;

	count = 1;
	while ((d / 16) > 0)
	{
		d = d / 16;
		count++;
	}
	return (count);
}

char *ft_tobighex(unsigned long int d)
{
	unsigned long int	strlen;
	char			*str;
	
	strlen = ft_countstr(d);
	str = (char *)malloc((ft_countstr(d) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[strlen] = '\0';
	strlen--;
	while (d >= 16 && strlen > 0)
	{
		str[strlen] = ft_converttocharacter(d % 16);
		d = d / 16;
		strlen--;
	}
	str[0] = ft_converttocharacter(d);
	return (str);
}
