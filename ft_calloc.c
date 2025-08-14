/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:13:46 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/09 18:06:48 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*p;
	void			*ptr;

	total = nmemb * size;
	i = 0;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	p = (unsigned char *)ptr;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
