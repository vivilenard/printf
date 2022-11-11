/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:49:43 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/11 15:03:18 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main ()
{
	int	*a;
	*a = 5;
	
	//ft_printf("hallihallo\n%s %d  %c %i %% %u %X %x %p\nlalala\n", "lalilu", 7777, 'p', -2147483648, 4294967295, 59, 59, a);
	//printf("aaaaa %%\n");
	//write(1, "hi", 1);
	printf("TOHEX %s\n", ft_tobighex(a));
	printf("%x\n", a);
	//printf("%p\n", a);
	return (0);
}
