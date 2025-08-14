/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:01:10 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/14 18:47:53 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	a;
	char	*dup;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	dup = (char *)malloc(i + 1);
	if (!dup)
	{
		return (NULL);
	}
	a = 0;
	while (a <= i)
	{
		dup[a] = s[a];
		a++;
	}
	return (dup);
}
