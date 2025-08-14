/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:39:05 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/14 17:58:13 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

#include <stdlib.h>

static size_t	ft_mystrlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

static void	ft_strcpy_join(char *result, const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	count1;
	size_t	count2;

	if (!s1 || !s2)
		return (NULL);
	count1 = ft_mystrlen(s1);
	count2 = ft_mystrlen(s2);
	result = (char *)malloc(count1 + count2 + 1);
	if (!result)
		return (NULL);
	ft_strcpy_join(result, s1, s2);
	return (result);
}
