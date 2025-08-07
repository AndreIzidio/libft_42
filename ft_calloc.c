/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizidio- <aizidio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:13:46 by aizidio-          #+#    #+#             */
/*   Updated: 2025/08/07 15:43:19 by aizidio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

void *ft_memset(void *s, int c, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total = nmemb * size;

    void *ptr = malloc(total);
    if (ptr == NULL)
        return NULL;

    ft_memset(ptr, 0, total);

	return ptr;
}

int main() {
    int *v = (int *) ft_calloc(5, sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);  // Deve imprimir: 0 0 0 0 0
    }

    free(v);
    return 0;
}
