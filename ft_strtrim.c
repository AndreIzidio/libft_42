/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:13:57 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/14 18:02:52 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

static size_t	ft_mystrlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*tri;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_mystrlen(s1);
	while ((s1[start]) && (ft_strchr(set, s1[start])))
		start++;
	while ((end > start) && (ft_strchr(set, s1[end - 1])))
		end--;
	tri = malloc((end - start + 1) * sizeof(char));
	if (!tri)
		return (NULL);
	ft_memcpy(tri, s1 + start, end - start);
	tri[end - start] = '\0';
	return (tri);
}
