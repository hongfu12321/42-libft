/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:07:21 by fhong             #+#    #+#             */
/*   Updated: 2018/07/02 21:10:57 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen_base(int value, int base)
{
	int		len;

	len = 0;
	if (value == 0)
		return (1);
	if (value < 0 && base == 10)
		len++;
	while (value)
	{
		value /= base;
		len++;
	}
	return (len);
}
