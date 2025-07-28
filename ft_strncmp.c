/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:42:15 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/28 15:50:42 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int i;

	i = 0;
	while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return 0;
}
int main()
{
	printf("Comparação 1: %d\n", ft_strncmp("banana", "banheiro", 3)); // 0
	printf("Comparação 2: %d\n", ft_strncmp("casa", "cafe", 2));       // 0
	printf("Comparação 3: %d\n", ft_strncmp("casa", "cafe", 3));       // > 0
	printf("Comparação 4: %d\n", ft_strncmp("ab", "abi", 5));          // < 0

	return 0;
}
