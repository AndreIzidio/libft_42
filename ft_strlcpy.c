/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:45:36 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/07 14:45:58 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i = 0;
	int count = 0;

	while(src[count] != '\0')
	{
		count++;
	}

	if(size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
			{
				dst[i] = src[i];
				i++;
			}
		dst[i] = '\0';
	}
	return count;
}

int main(void)
{

	char dest[5];
	size_t copied;

	copied = ft_strlcpy(dest, "acasa", sizeof(dest));

	printf("Conteúdo copiado: %s\n", dest);
	printf("Tamanho de src: %zu\n", copied);

	return 0;
}
