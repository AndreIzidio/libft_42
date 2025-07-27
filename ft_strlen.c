/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:39:25 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/25 17:39:26 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	printf("res %d", count);
	return(count);
}
