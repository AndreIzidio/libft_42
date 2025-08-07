/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:32:13 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/07 14:32:22 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;

	const unsigned char *ptr_s1 = (const char *)s1;
	const unsigned char *ptr_s2 = (const char *)s2;

	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return(ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return 0;
}

