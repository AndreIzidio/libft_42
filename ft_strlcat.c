/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:51:53 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/09 18:01:09 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = 0;
	len_src = 0;
	while ((dst[len_dest] != '\0') && (len_dest < size))
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (len_dest == size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i + 1 < size))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
