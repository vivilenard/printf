/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:02:02 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/14 11:24:14 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*uft_allocation(char *s, size_t count, size_t n)
{
	s[count] = '\0';
	count--;
	while (n >= 10 && count > 0)
	{
		s[count] = n % 10 + '0';
		n = n / 10;
		count--;
	}
	s[count] = n % 10 + '0';
	return (0);
}

int	ft_uhowmanydigits(unsigned int n, size_t count)
{
	size_t	i;

	i = 1;
	while (n / i > 0)
	{
		i = i * 10;
		count++;
	}
	return (count);
}

char	*ft_utoa(unsigned int n)
{
	size_t	count;
	char	*s;

	count = 0;

	if (n == 0)
		count = 1;
	count = ft_uhowmanydigits(n, count);
	s = malloc((count + 1) * sizeof(char));
	if (!s)
		return (NULL);
	uft_allocation(s, count, n);
	return (s);
}
