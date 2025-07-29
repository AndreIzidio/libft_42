/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:52:43 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/29 15:21:17 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;

	unsigned char *ptr = (unsigned char *)s;
	unsigned char copy = (unsigned char)c;

	while(i < n)
	{
		ptr[i] = copy;
		i++;
	}
	return s;
}
