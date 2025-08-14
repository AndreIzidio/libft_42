/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:50:11 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/14 19:01:49 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	lang;

	lang = n;
	if (lang < 0)
	{
		ft_putchar_fd('-', fd);
		lang = -lang;
	}
	if (lang > 9)
	{
		ft_putnbr_fd(lang / 10, fd);
	}
	ft_putchar_fd((lang % 10) + '0', fd);
}
