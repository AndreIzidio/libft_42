/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:22 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/29 17:57:01 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
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

