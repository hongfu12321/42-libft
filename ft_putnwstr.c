/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 21:35:26 by fhong             #+#    #+#             */
/*   Updated: 2018/07/28 21:37:52 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnwstr(wchar_t *wstr, size_t size)
{
	size_t i;

	i = 0;
	while (wstr[i] && i < size)
	{
		ft_putwchar(wstr[i]);
		i++;
	}
}