/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:45:47 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/09 18:03:46 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*ptr;
	unsigned char			src;

	i = 0;
	src = (unsigned char)c;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == src)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}
