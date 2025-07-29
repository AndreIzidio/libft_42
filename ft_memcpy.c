/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:25:50 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/29 15:44:19 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;

	unsigned char *src_ptr = (unsigned char *)src;
	unsigned char *dest_ptr = (unsigned char *)dest;

	while(i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return dest;
}
