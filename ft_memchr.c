/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:45:47 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/29 17:04:22 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *memchr(const void *s, int c, size_t n)
{
	size_t i = 0;

	const unsigned char *ptr = (const char *)s;
	unsigned char src = (unsigned char)c;

	while(i < n)
	{
		if(ptr[i] == src)
			return (void *)&ptr[i];
		i++;
	}
	return 0;
}
