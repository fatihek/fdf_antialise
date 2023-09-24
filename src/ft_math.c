/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalaman <student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:56:41 by vparlak           #+#    #+#             */
/*   Updated: 2023/09/24 18:56:37 by fkalaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

float	ft_fpart(float x)
{
	return (x - floor(x));
}

float	ft_rfpart(float x)
{
	return (1.0 - ft_fpart(x));
}

int	ft_ipart(float x)
{
	return ((int)x);
}

int	ft_abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}
