/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:38:49 by fhong             #+#    #+#             */
/*   Updated: 2018/07/05 18:36:22 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_put_base_unsigned(uintmax_t n, int base)
{
	if (n >= base)
		ft_put_base_unsigned(n / base, base);
	n %= base;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}
