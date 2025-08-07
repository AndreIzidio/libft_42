/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:32:31 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/07 14:50:59 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;

	if(d == s || n == 0)
		return(dest);

	if(d < s)
	{
		size_t i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while(n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return dest;
}

int main() {
    char texto[] = "abcdefhijk";
    ft_memmove(texto + 8, texto, 4);  // copia "abcd" para a posição texto[2]
    printf("%s\n", texto); // resultado: "ababcd"
    return 0;
}
