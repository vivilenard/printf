/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:59:19 by vlenard           #+#    #+#             */
/*   Updated: 2022/10/17 12:00:19 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((48 <= c) && (c <= 57)) || ((65 <= c) && (c <= 90))
		|| ((97 <= c) && (c <= 122)))
		return (1);
	else
		return (0);
}
