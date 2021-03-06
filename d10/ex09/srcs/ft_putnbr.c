/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:31:25 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 18:57:52 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	int pow;
	int mod;
	int tmp;

	pow = 1;
	tmp = nb;
	while (tmp /= 10)
	{
		pow *= 10;
	}
	mod = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		mod = -1;
	}
	while (pow)
	{
		ft_putchar(nb / pow * mod + '0');
		nb %= pow;
		pow /= 10;
	}
}
