/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:44:56 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/28 15:19:46 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strrchr(const char *str, int c)
{
	int i = 0;
	const char *last = 0;

	while(*str != '\0')
	{
		if(*str == (char)c)
		{
			last = str;
		}
		str++;
	}
	if(c == '\0')
	{
		return(char *)&str[i];
	}
	return ((char *)last);
}

int main()
{
	char *res = ft_strrchr("teste de usuario", 'u');
	if (res)
		printf("Achado: %s\n", res);  // Saída: "uso"
	else
		printf("Não encontrado\n");

	return 0;
}
