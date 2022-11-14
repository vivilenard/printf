/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:49:43 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/14 16:06:23 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main ()
{
	int	*a;
	int	x;
	*a = 5;

	unsigned int ad;
	ad = (unsigned int)a;
	
	//ft_printf("hallihallo\n%s %d  %c %i %% %u %X %x %p\nlalala\n", "lalilu", 7777, 'p', -2147483648, 4294967295, 59, 59, ad);
	//printf("aaaaa %%\n");
	//write(1, "hi", 1);
	//printf("%p\n", 9223372036854775807);
	printf("Meine Funktion:\n");
	x = ft_printf(" %p du\n", "a");
	ft_printf("%d", x);

	printf("Originalfunktion:\n");
	x = printf(" %p du\n", "a");
	printf("%d", x);

	
	//printf("TOPTR %s\n", ft_ultopointer(a));
	//printf("%p\n", a);
	return (0);
}
