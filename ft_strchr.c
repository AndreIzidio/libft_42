/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:35:23 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/27 16:32:13 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == (char)c)
			return (char *)&str[i];
		i++;
	}
	if (c == '\0')
		return(char *)&str[i];
	return (0);
}


/*char * (o que é?)*/
/* const char *str ( é const pq nao vamos modificar a string) */
/* int (é o carac. que vai ser procurado, int (por conta da bibli padrao) mas vai ser comparado como char) */
/* if(str[i] == (char)c)
			return (char *)&str[i];
			-se o caracter for encontrado, ira pegar o endereço  */

int main()
{
	char *res = ft_strchr("Exemplo de uso", 'u');
	if (res)
		printf("Achado: %s\n", res);  // Saída: "uso"
	else
		printf("Não encontrado\n");

	return 0;
}
