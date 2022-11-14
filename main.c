/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:49:43 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/14 08:30:28 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main ()
{
	int	*a;
	*a = 5;

	unsigned int ad;
	ad = (unsigned int)a;
	
	//ft_printf("hallihallo\n%s %d  %c %i %% %u %X %x %p\nlalala\n", "lalilu", 7777, 'p', -2147483648, 4294967295, 59, 59, ad);
	//printf("aaaaa %%\n");
	//write(1, "hi", 1);
	//printf("%p\n", 9223372036854775807);

	ft_printf("hier kommt der pointer %p xx			ln\n", a);
	//printf("TOPTR %s\n", ft_ultopointer(a));
	printf("%p\n", a);
	return (0);
}
