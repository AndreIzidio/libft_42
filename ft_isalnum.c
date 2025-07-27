/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:37:12 by aizidio-          #+#    #+#             */
/*   Updated: 2025/07/25 17:37:16 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int ft_isalpha (int c);
int ft_isdigit (int c);

int ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
	{
	return (1);
	}
	return 0;
}
