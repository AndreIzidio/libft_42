/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:38:40 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/25 17:38:42 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_isalpha(int c);

int ft_isalpha(int c)
{
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
	printf("aacca");
	return (1);
	}
	printf("aaabbbb");
	return 0;
}

int main()
{
	ft_isalpha('G');
}
