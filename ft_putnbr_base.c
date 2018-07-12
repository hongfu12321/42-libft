/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:20:04 by fhong             #+#    #+#             */
/*   Updated: 2018/07/11 19:37:28 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int value, char *base)
{
	int base_len;

	base_len = ft_strlen(base);
	if (value < 0)
	{
		write(1, "-", 1);
		value *= (-1);
	}
	if (value >= base_len)
		ft_putnbr_base(value / base_len, base);
	write(1, &base[value % base_len], 1);
}

int		main(void)
{
	ft_putnbr_base(31, "0123456789ABCDEF");
	return (0);
}
