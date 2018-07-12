/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:12:10 by fhong             #+#    #+#             */
/*   Updated: 2018/07/05 18:14:42 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_intlen_base(int value, int base)
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