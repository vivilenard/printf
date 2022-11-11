/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:49:43 by vlenard           #+#    #+#             */
/*   Updated: 2022/11/11 14:06:29 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main ()
{
	ft_printf("hallihallo\n%s %d  %c %i %% %u %X %x\nlalala\n", "lalilu", 7777, 'p', -2147483648, 4294967295, 59, 59);
	//printf("aaaaa %%\n");
	//write(1, "hi", 1);
	//printf("TOHEX %s\n", ft_tobighex(257 * 16));
	//printf("%x\n", 67);
	//printf("hi\0\0\nhihi\n");
	return (0);
}
