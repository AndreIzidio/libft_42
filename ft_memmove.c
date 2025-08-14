/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:32:31 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/14 18:24:12 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s || n == 0)
		return (dest);
	if ((d > s) && (s + n > d))
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
